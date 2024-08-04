#include "Functions.h"

bool checkCollision(Bird &bird, std::vector<Pipe> &pipes) {
    int birdLeft = bird.getPosX();
    int birdRight = bird.getPosX() + BIRD_WIDTH;
    int birdTop = bird.getPosY();
    int birdBottom = bird.getPosY() + BIRD_HEIGHT;

    if (birdBottom >= GROUND_POS_Y) {
        return true;
    }

    for (Pipe& pipe : pipes) {
        int pipeLeft = pipe.getPosX(); 
        int pipeRight = pipe.getPosX() + PIPE_WIDTH;

        int pipeBottomTop = pipe.getPosY() + PIPE_GAP;
        
        int pipeTopBottom = pipe.getPosY() - PIPE_GAP;

        if (birdRight > pipeLeft && birdLeft < pipeRight) {
            if (birdBottom > pipeBottomTop) {
                return true;
            }
            if (birdTop < pipeTopBottom) {
                return true;
            }
        }
    }
    
    return false;
}