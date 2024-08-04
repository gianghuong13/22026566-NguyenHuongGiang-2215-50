#ifndef LBUTTON_H
#define LBUTTON_H

#include "Base.h"
#include "LTexture.h"

const int BUTTON_WIDTH = 200;
const int BUTTON_HEIGHT = 100;

class LButton {
public:
    LButton();

    LButton(int x, int y);

    void setPosition(int x, int y);

    bool isInside(SDL_Event &e);

    void render(SDL_Renderer *gRenderer, LTexture &gButtonTexture);
private:
    SDL_Point mPosition;
};

void handleRestartButton(SDL_Event &e, bool &quit, bool &restart, LButton &gRestartButton);

#endif // LBUTTON_H