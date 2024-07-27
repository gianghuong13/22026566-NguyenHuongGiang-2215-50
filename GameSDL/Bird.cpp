#include "Bird.h";

Bird::Bird() {
    mPosX = 50;
    mPosY = 100;
    mVelY = 0;
    status = FALL;
}

void Bird::render(SDL_Renderer *gRenderer, LTexture &gBirdTexture) {
    gBirdTexture.render(mPosX, static_cast<int>(mPosY), gRenderer);
}

bool Bird::isOnGround() {
    return mPosY >= GROUND_POS_Y - BIRD_HEIGHT;
}

void Bird::handleEvent(SDL_Event &e) {
    if (e.type == SDL_KEYDOWN ) {
        if (e.key.keysym.sym == SDLK_SPACE) {
            mVelY = JUMP_VEL;
            status = JUMP;
        }
    }
}

void Bird::move() {
    if (status == JUMP) {
        mVelY = JUMP_VEL;
        status = FALL;
    } else {
        mVelY += FALL_VEL;
    }
    mPosY += mVelY;

    if (mPosY < 0)
    {
        mPosY = 0;
        mVelY = 0;
    }

    if (isOnGround()) {
        mPosY = GROUND_POS_Y - BIRD_HEIGHT;
        mVelY = 0;
    }
    
}

int Bird::getPosX() {
    return mPosX;
}

int Bird::getPosY() {
    return static_cast<int>(mPosY);
}


