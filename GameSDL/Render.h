#ifndef RENDER_H
#define RENDER_H

#include "LTexture.h"
#include "Base.h"

void renderScrollingGround(int& scrollingOffset,
                        LTexture &gGroundTexture,
                        SDL_Renderer* gRenderer);

#endif // RENDER_H
