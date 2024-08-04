#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include "Bird.h"
#include "Pipe.h"
#include "Base.h"
#include<vector>

bool checkCollision(Bird &bird, std::vector<Pipe> &pipes);

#endif // FUNCTIONS_H