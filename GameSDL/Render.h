#ifndef RENDER_H
#define RENDER_H

#include "LTexture.h"
#include "Base.h"
#include "LButton.h"
#include "Bird.h"

void renderScrollingGround(int& scrollingOffset,
                        LTexture &gGroundTexture,
                        SDL_Renderer* gRenderer,
                        bool gameOver);

int readScoreFromFile(std::string path);
void updateHighScore(std::string path, int score);
void renderScore(SDL_Renderer* gRenderer, int score, LTexture* gNumberTextures, int posX, int posY);
void renderGameOverState(SDL_Renderer* gRenderer, LTexture &gScoreBoardTexture, 
                        LTexture &gRestartButtonTexture, int score, int highScore, 
                        LButton &gRestartButton, Bird &bird, LTexture &gBirdTexture, 
                        LTexture* gNumberTextures);

#endif // RENDER_H
