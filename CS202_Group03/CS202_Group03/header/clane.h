#ifndef claneh
#define claneh

#include "header.h"

using namespace std;

class LANE {
private:
    int x, y, time;
    bool isReverse;

    int len, offset, frameCounter, obstacleHeight;

    vector<OBSTACLE*> obstacles;

public:
    LANE(OBSTACLE *base, int y = 0, int gap = 10, int time = 100, bool isReverse = false) ;
    ~LANE();
    vector<OBSTACLE*> getObstacles();
    void move();
    void clear();
    void draw();
    void save();
};

#endif