#include "LButton.h"

LButton::LButton()
{
    mPosition.x = 0;
    mPosition.y = 0;
}

LButton::LButton(int x, int y)
{
    mPosition.x = x;
    mPosition.y = y;
}

void LButton::setPosition(int x, int y)
{
    mPosition.x = x;
    mPosition.y = y;
}

bool LButton::isInside(SDL_Event &e) {
    int x, y;
    SDL_GetMouseState(&x, &y);
    bool inside = true;

    if (x < mPosition.x) {
        inside = false;
    }
    else if (x > mPosition.x + BUTTON_WIDTH) {
        inside = false;
    }
    else if (y < mPosition.y) {
        inside = false;
    }
    else if (y > mPosition.y + BUTTON_HEIGHT) {
        inside = false;
    }

    return inside;
}
void LButton::render(SDL_Renderer *gRenderer, LTexture &gButtonTexture)
{
    gButtonTexture.render(mPosition.x, mPosition.y, gRenderer);
}

void handleRestartButton(SDL_Event &e, bool &quit, bool &restart, LButton &gRestartButton)
{
    if (gRestartButton.isInside(e))
    {
        if (e.type == SDL_MOUSEBUTTONDOWN)
        {
            quit = false;
            restart = true;
        }
    }
}


