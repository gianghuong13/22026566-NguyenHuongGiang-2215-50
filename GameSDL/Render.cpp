#include "Render.h"

void renderScrollingGround(int& scrollingOffset,
	                    LTexture &gGroundTexture,
	                    SDL_Renderer* gRenderer,
						bool gameOver)
{
	if (!gameOver) {
		scrollingOffset -= GROUND_SCROLLING_SPEED;
		if (scrollingOffset < -gGroundTexture.getWidth())
		{
			scrollingOffset = 0;
		}
	}
	gGroundTexture.render(scrollingOffset, GROUND_POS_Y, gRenderer);
	gGroundTexture.render(scrollingOffset + gGroundTexture.getWidth(), GROUND_POS_Y, gRenderer);
}

int readScoreFromFile(std::string path) {
	std::ifstream file(path);
	int score;
	if (file.is_open()) {
		file >> score;
		file.close();
	}
	return score;
}

void updateHighScore(std::string path, int score) {
	int lastHighScore = readScoreFromFile(path);
	if (score > lastHighScore) {
		std::ofstream file(path);
		if (file.is_open()) {
			file << score;
			file.close();
		}
	}
}

void renderScore(SDL_Renderer* gRenderer, int score, LTexture* gNumberTextures,
				int posX, int posY) 
{
    std::string scoreText = std::to_string(score);

    for (char c : scoreText) {
        int digit = c - '0';

		gNumberTextures[digit].render(posX, posY, gRenderer);

        posX += gNumberTextures[digit].getWidth();
    }
}

void renderGameOverState(SDL_Renderer* gRenderer, LTexture &gScoreBoardTexture, 
						LTexture &gRestartButtonTexture, int score, int highScore, 
						LButton &gRestartButton, Bird &bird, LTexture &gBirdTexture,
						LTexture* gNumberTextures) 
{
	bird.fall();
	bird.render(gRenderer, gBirdTexture);

	gScoreBoardTexture.render(SCORE_BOARD_POS_X, SCORE_BOARD_POS_Y, gRenderer);

	renderScore(gRenderer, score, gNumberTextures, SCORE_BOARD_POS_X + 25, SCORE_BOARD_POS_Y + 80);

	std::string highScoreText = std::to_string(highScore);
	int xOffset = SCORE_BOARD_POS_X + 25;
	int yOffset = SCORE_BOARD_POS_Y + 20;

	for (char c : highScoreText) {
		int digit = c - '0';

		gNumberTextures[digit].render(xOffset, yOffset, gRenderer);

        xOffset += gNumberTextures[digit].getWidth();
	}

	gRestartButton.render(gRenderer, gRestartButtonTexture);

}
