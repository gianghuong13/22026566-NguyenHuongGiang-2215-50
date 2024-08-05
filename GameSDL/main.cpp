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

                    if (pipes.size() > 0 && pipes[0].isOffScreen()) {
                        pipes.erase(pipes.begin());
                        pipes.push_back(Pipe(SCREEN_WIDTH, GROUND_POS_Y - PIPE_HEIGHT + (rand() % (PIPE_HEIGHT/2))));
                        score++;
                    }
                    
                    if (checkCollision(bird, pipes)) {
                        gameOver = true;
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
                
                renderScrollingGround(scrollingOffset, gGroundTexture, gRenderer);

                renderScore(gRenderer, score);
                
                if (gameOver) {
                    gRestartButton.render(gRenderer, gRestartButtonTexture);
                }

                SDL_RenderPresent(gRenderer);
            }

        }
    }

    close();
    return 0;
}