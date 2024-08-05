#include "Render.h"

void renderScrollingGround(int& scrollingOffset,
	                    LTexture &gGroundTexture,
	                    SDL_Renderer* gRenderer)
{
	scrollingOffset -= GROUND_SCROLLING_SPEED;
	if (scrollingOffset < -gGroundTexture.getWidth())
	{
		scrollingOffset = 0;
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

void renderScore(SDL_Renderer* gRenderer, int score) {
    std::string scoreText = std::to_string(score);

    int xOffset = 10; 
    int yOffset = 10;

    for (char c : scoreText) {
        int digit = c - '0';

        int width, height;
        SDL_QueryTexture(gNumberTextures[digit].mTexture, nullptr, nullptr, &width, &height);

        SDL_Rect renderQuad = { xOffset, yOffset, width, height };
        SDL_RenderCopy(gRenderer, gNumberTextures[digit].mTexture, nullptr, &renderQuad);

        xOffset += width;
    }
}


