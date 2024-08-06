#ifndef BASE_H
#define BASE_H

#include <SDL.h>
#include <SDL_image.h>
#include <SDL_mixer.h>
#include <SDL_ttf.h>
#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <fstream>
#include <sstream>

const int SCREEN_WIDTH = 288;
const int SCREEN_HEIGHT = 390;

const int GROUND_SCROLLING_SPEED = 3;

const int GROUND_WIDTH = 288;
const int GROUND_HEIGHT = 65;
const int GROUND_POS_Y = SCREEN_HEIGHT - GROUND_HEIGHT;

const int RESTART_BUTTON_POS_X = 120;
const int RESTART_BUTTON_POS_Y = 220;

const int SCORE_BOARD_POS_X = 100;
const int SCORE_BOARD_POS_Y = 70;

const int INSTRUCTION_POS_X = (SCREEN_WIDTH - 100)/2;
const int INSTRUCTION_POS_Y = SCREEN_HEIGHT / 2;

#endif // BASE_H
