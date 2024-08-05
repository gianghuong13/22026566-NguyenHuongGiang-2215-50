#ifndef LTEXTURE_H
#define LTEXTURE_H

#include "Base.h"

class LTexture
{
public:
    LTexture();

    ~LTexture();

    void free();

    bool loadFromFile(std::string path, SDL_Renderer *gRenderer);

    //void render(int x, int y, SDL_Renderer *gRenderer, SDL_Rect *clip = NULL);

    void render(int x, int y, SDL_Renderer* gRenderer, SDL_Rect* clip = NULL, double angle = 0.0, SDL_Point* center = NULL, SDL_RendererFlip flip = SDL_FLIP_NONE);

    int getWidth();

    int getHeight();

    SDL_Texture *mTexture;
private:
    int mWidth;
    int mHeight;
};

#endif // LTEXTURE_H