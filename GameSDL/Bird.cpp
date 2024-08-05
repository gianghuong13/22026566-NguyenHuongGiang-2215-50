#include "Bird.h";

Bird::Bird() {
    mPosX = SCREEN_WIDTH / 2 - 30;
    mPosY = 150;
    mVelY = 0;
    status = IDLE;
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
    }
    else if (status == IDLE) {
        mVelY = 0;
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

void Bird::fall() {
    mVelY += FALL_VEL;
    mPosY += mVelY;

    if (isOnGround()) {
        mPosY = GROUND_POS_Y - BIRD_HEIGHT;
        mVelY = 0;
    }
}

int Bird::getPosX() {
    return mPosX;
}

float Bird::getPosY() {
    return mPosY;
}

int Bird::getStatus() {
    return status;
}

void Bird::setStatus(int newStatus) {
    status = newStatus;
}

