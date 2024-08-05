#ifndef BIRD_H
#define BIRD_H

#include "LTexture.h";

#define JUMP 1
#define FALL 0
#define IDLE 2
#define JUMP_VEL -5.5f
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

    void fall();

    void render(SDL_Renderer *gRenderer, LTexture &gBirdTexture);

    int getPosX();

    float getPosY();

    bool isOnGround();

    int getStatus();

    void setStatus(int status);
};

#endif // BIRD_H