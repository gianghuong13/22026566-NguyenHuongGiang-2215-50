#ifndef BIRD_H
#define BIRD_H

#include "LTexture.h";

#define JUMP 1
#define FALL 0
#define JUMP_VEL -7
#define FALL_VEL 0.5f

const int BIRD_WIDTH = 34;
const int BIRD_HEIGHT = 24;

class Bird {
private:
    int mPosX;
    float mPosY;
    float mVelY;
    int status;

public:
    Bird();

    void handleEvent(SDL_Event &e);

    void move();

    void render(SDL_Renderer *gRenderer, LTexture &gBirdTexture);

    int getPosX();

    int getPosY();

    bool isOnGround();
};

#endif // BIRD_H