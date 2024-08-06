#include "main.h"

int main(int argc, char* argv[])
{
    if (!init())
    {
        std::cout << "Failed to initialize" << std::endl;
    }
    else 
    {
        if (!loadMedia()) 
        {
            std::cout << "Failed to load media" << std::endl;
        }
        else 
        {
            bool quit = false;
            SDL_Event e;
            int scrollingOffset = 0;
            bool gameStarted = false;
            bool gameOver = false;
            bool restart = false;
            int score = 0;
            int highScore = readScoreFromFile("score.txt");

            pipes.push_back(Pipe(SCREEN_WIDTH, GROUND_POS_Y - PIPE_HEIGHT));

            while (!quit) 
            {
                while (SDL_PollEvent(&e) != 0)
                {
                    if (e.type == SDL_QUIT)
                    {
                        quit = true;
                    }
                    if (gameOver) 
                    {
                        handleRestartButton(e, quit, restart, gRestartButton);
                        if (e.type == SDL_KEYDOWN && e.key.keysym.sym == SDLK_SPACE) {
                            restart = true;
                        }
                        if (restart) {
                            gameStarted = false;
                            gameOver = false;
                            restart = false;
                            score = 0;
                            bird = Bird();
                            pipes.clear();
                            pipes.push_back(Pipe(SCREEN_WIDTH, GROUND_POS_Y - PIPE_HEIGHT));
                        }
                    }
                    else 
                    {
                        if(!gameStarted && e.type == SDL_KEYDOWN && e.key.keysym.sym == SDLK_SPACE) 
                        {
                            gameStarted = true;
                        }
                        bird.handleEvent(e);
                    }
                }

                if (gameStarted && !gameOver)
                {
                    bird.move();

                    for (auto &pipe : pipes) {
                        pipe.move();
                    }

                    for (auto &pipe : pipes) {
                        if (!pipe.isPassed() && bird.getPosX() > pipe.getPosX() + PIPE_WIDTH) {
                            pipe.setPassed(true);
                            score++;
                        }
                    }

                    if (pipes.size() > 0 && pipes[0].isOffScreen()) {
                        pipes.erase(pipes.begin());
                        pipes.push_back(Pipe(SCREEN_WIDTH, GROUND_POS_Y - PIPE_HEIGHT + (rand() % (PIPE_HEIGHT/2))));
                    }
                    
                    if (checkCollision(bird, pipes)) {
                        Mix_PlayChannel(-1, gDeadSound, 0);
                        gameOver = true;
                        updateHighScore("score.txt", score);
                        highScore = readScoreFromFile("score.txt");
                    }

                }

                SDL_RenderClear(gRenderer);
                gBackgroundTexture.render(0, 0, gRenderer);
                bird.render(gRenderer, gBirdTexture);

                if (gameStarted) {
                    for (auto pipe : pipes) {
                        pipe.render(gRenderer, gPipeTexture);
                    }
                }
                
                renderScrollingGround(scrollingOffset, gGroundTexture, gRenderer, gameOver);

                if(!gameStarted) {
                    gInstructionTexture.render(INSTRUCTION_POS_X, INSTRUCTION_POS_Y, gRenderer);
                }
                
                if (gameOver) {
                    renderGameOverState(gRenderer, gScoreBoardTexture, gRestartButtonTexture, score, highScore, 
                    gRestartButton, bird, gBirdTexture, gNumberTextures, gBestTexture, gScoreTexture);
                } else {
                    renderScore(gRenderer, score, gNumberTextures, SCREEN_WIDTH/2 - 10, 50);
                }

                SDL_RenderPresent(gRenderer);
            }

        }
    }

    close();
    return 0;
}