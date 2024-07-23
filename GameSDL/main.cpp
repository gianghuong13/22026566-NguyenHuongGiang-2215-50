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
            while (!quit) 
            {
                while (SDL_PollEvent(&e) != 0)
                {
                    if (e.type == SDL_QUIT)
                    {
                        quit = true;
                    }
                }
                SDL_RenderClear(gRenderer);
                gBackgroundTexture.render(0, 0, gRenderer);
                renderScrollingGround(scrollingOffset, gGroundTexture, gRenderer);
                SDL_RenderPresent(gRenderer);
            }

        }
    }

    close();
    return 0;
}