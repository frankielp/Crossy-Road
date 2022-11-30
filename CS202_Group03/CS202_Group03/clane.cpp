#include "header/header.h"

LANE::LANE(OBSTACLE *base, int y, int gap, int time, bool isReverse) 
: x(x), y(y), time(time), isReverse(isReverse) { 
    offset = 0;
    frameCounter = 0;
    obstacleHeight = base -> getHeight();

    len = base -> getWidth() + gap;

    int xx = -len;  
    while (xx < consoleWidth + len) {
        OBSTACLE* obs = base -> create(xx, y, isReverse);
        obstacles.push_back(obs);

        xx += len;
    }

    draw();
}

LANE::~LANE() {
    for (OBSTACLE*& obs : obstacles) 
        delete obs;
}

vector<OBSTACLE*> LANE::getObstacles(){
    return obstacles;
}

void LANE::move() {
    if (++frameCounter == time) {
        frameCounter = 0;

        clear();

        if (!isReverse)
            ++offset %= len;
        else
            --offset %= len;

        draw();
    }
}

void LANE::clear() {
    for (OBSTACLE*& obs : obstacles) 
        obs -> clear(offset); 
}

void LANE::draw() {
    for (OBSTACLE*& obs : obstacles) 
        obs -> draw(offset); 
}