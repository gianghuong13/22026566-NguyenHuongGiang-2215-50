#ifndef PIPE_H
#define PIPE_H

#include "LTexture.h";

const int PIPE_WIDTH = 52;
const int PIPE_HEIGHT = 220;
const int PIPE_GAP = 50;
const int PIPE_VELOCITY = -2;

class Pipe {
private:
    int mPosX;
    int mPosY;
    bool mIsPassed;
public :
    Pipe(int x, int y);
    
    void move();

    void render(SDL_Renderer *gRenderer, LTexture &gPipeLTexure);

    int getPosX();

    int getPosY();

    bool isOffScreen();

    bool isPassed();

    void setPassed(bool passed);
};

#endif // PIPE_H