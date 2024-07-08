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

    void render(int x, int y, SDL_Renderer *gRenderer, SDL_Rect *clip = NULL);

    int getWidth();

    int getHeight();

private:
    SDL_Texture *mTexture;

    int mWidth;
    int mHeight;
};

#endif // LTEXTURE_H