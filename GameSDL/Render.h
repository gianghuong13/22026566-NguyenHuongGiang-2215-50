#ifndef RENDER_H
#define RENDER_H

#include "LTexture.h"
#include "Base.h"
#include "LButton.h"
#include "NumTexture.h"

void renderScrollingGround(int& scrollingOffset,
                        LTexture &gGroundTexture,
                        SDL_Renderer* gRenderer);

int readScoreFromFile(std::string path);
void updateHighScore(std::string path, int score);
void renderScore(SDL_Renderer* gRenderer, int score);

#endif // RENDER_H
