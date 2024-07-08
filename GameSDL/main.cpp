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
            while (!quit) 
            {
                while (SDL_PollEvent(&e) != 0)
                {
                    if (e.type == SDL_QUIT)
                    {
                        quit = true;
                    }
                }

                gBoardGridTexture.render(0, 0, gRenderer);
                SDL_RenderPresent(gRenderer);
            }

        }
    }

    close();
    return 0;
}