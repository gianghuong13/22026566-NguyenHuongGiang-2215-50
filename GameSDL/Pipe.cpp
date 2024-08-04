#include "Pipe.h";

Pipe::Pipe(int x, int y) {
    mPosX = x;
    mPosY = y;
    mIsPassed = false;
}

void Pipe::move() {
    mPosX += PIPE_VELOCITY;
}

void Pipe::render(SDL_Renderer* gRenderer, LTexture &gPipeTexture) {
    SDL_Rect topPipeClip = {0, 0, PIPE_WIDTH, PIPE_HEIGHT};
    gPipeTexture.render(mPosX, mPosY - PIPE_GAP - PIPE_HEIGHT, gRenderer, &topPipeClip, 180, NULL, SDL_FLIP_NONE);

    SDL_Rect bottomPipeClip = {0, 0, PIPE_WIDTH, PIPE_HEIGHT};
    gPipeTexture.render(mPosX, mPosY + PIPE_GAP, gRenderer, &bottomPipeClip);
}

int Pipe::getPosX() {
    return mPosX;
}

int Pipe::getPosY() {
    return mPosY;
}

bool Pipe::isOffScreen() {
    return mPosX + PIPE_WIDTH < 0;
}

bool Pipe::isPassed() {
    return mIsPassed;
}

void Pipe::setPassed(bool passed) {
    mIsPassed = passed;
}