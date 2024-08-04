#ifndef MAIN_H
#define MAIN_H

#include "Base.h"
#include "LTexture.h"
#include "Render.h"
#include "Bird.h"
#include "Pipe.h"
#include "Functions.h"
#include "LButton.h"

bool init();
bool loadMedia();
void close();

SDL_Window* gWindow = NULL;
SDL_Renderer* gRenderer = NULL;

LTexture gBackgroundTexture;
LTexture gGroundTexture;
LTexture gBirdTexture;
LTexture gPipeTexture;
LTexture gPlayButtonTexture;

LButton gPlayButton(PLAY_BUTTON_POS_X, PLAY_BUTTON_POS_Y);

Bird bird;
std::vector<Pipe> pipes;

bool init()
{
	bool success = true;

	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		std::cout << "Can not initialize SDL" << SDL_GetError() << std::endl;
		success = false;
	}
	else
	{
		if (!SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "1"))
		{
			std::cout << "Warning: Linear texture filtering not enabled!";
		}

		gWindow = SDL_CreateWindow("Flappy Bird", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
								   SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
		if (gWindow == NULL)
		{
			std::cout << "Can not create window" << SDL_GetError() << std::endl;
			success = false;
		}
		else
		{
			gRenderer = SDL_CreateRenderer(gWindow, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
			if (gRenderer == NULL)
			{
				std::cout << "Can not creater renderer" << SDL_GetError() << std::endl;
				success = false;
			}
			else
			{
				SDL_SetRenderDrawColor(gRenderer, 0xFF, 0xFF, 0xFF, 0xFF);

				int imgFlags = IMG_INIT_PNG;
				if (!(IMG_Init(imgFlags) & imgFlags))
				{
					std::cout << "Can not initialize SDL_image" << IMG_GetError() << std::endl;
					success = false;
				}

    
			}
		}
	}

	return success;
}

bool loadMedia()
{
    bool success = true;

    if (!gBackgroundTexture.loadFromFile("assets/images/background-day.png", gRenderer))
    {
        std::cout << "Failed to load board grid texture" << std::endl;
        success = false;
    }
	if (!gGroundTexture.loadFromFile("assets/images/base.png", gRenderer)) {
		std::cout << "Failed to load ground texture" << std::endl;
		success = false;
	}
	if (!gBirdTexture.loadFromFile("assets/images/yellowbird-midflap.png", gRenderer)) { 
		std::cout << "failed to load bird image";
		success = false;
	}
	if (!gPipeTexture.loadFromFile("assets/images/pipe-green.png", gRenderer)) {
		std::cout << "fail to load pipe";
		success = false;
	}
	if (!gPlayButtonTexture.loadFromFile("assets/images/PlayBtn.png", gRenderer)) {
		std::cout << "fail to load play button";
		success = false;
	}
    return success;
}

void close() 
{
    gBackgroundTexture.free();
	gGroundTexture.free();
	gBirdTexture.free();
	gPipeTexture.free();
    SDL_DestroyRenderer(gRenderer);
    SDL_DestroyWindow(gWindow);
    gWindow = NULL;
    gRenderer = NULL;

    IMG_Quit();
    SDL_Quit();
}

#endif // MAIN_H