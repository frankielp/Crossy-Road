#ifndef cobstacleh
#define cobstacleh

#include "header.h"

using namespace std;
class OBSTACLE{
protected:
    int x, y;
    bool isReverse;
    int curOffset=0;
    int damage;

    int height, width;
    string* visual;

public:
	OBSTACLE(int x = 0, int y = 0, bool isReverse = false, int height = 10, int width = 10,int damage=0);

    virtual void sound()=0;
	virtual ~OBSTACLE();

	virtual int getWidth();

    virtual int getHeight();

    virtual int getPosX();

    virtual int getPosY();

    virtual int getColor()=0;

	virtual OBSTACLE* create(int x, int y, bool isReverse) = 0;

    //virtual void Move(int, int); //speed and direction control

    //virtual void Tell() = 0;
    virtual int getDamage();

	virtual void clear(const int& offset);

    virtual void draw(const int &offset);
};

#endif