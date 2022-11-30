#ifndef cvehicleh
#define cvehicleh
#include "header.h"

using namespace std;

class CTRUCK: public OBSTACLE{
private:
    int frames;
    vector<string*> visuals;
public:
	static const int height = 4;
    static const int width = 16;
	static const int damage = 10;

	void sound();
	CTRUCK(int x = 0, int y = 0, bool isReverse = false);
	OBSTACLE* create(int x = 0, int y = 0, bool isReverse = false);
	void draw(const int &offset);
	void clear(const int &offset);
	int getColor();
	//void Tell();
	~CTRUCK();
};

class CCAR: public OBSTACLE{
private:
    int frames;
    vector<string*> visuals;
public:
	static const int height = 4;
    static const int width = 11;
	static const int damage = 10;

	void sound();
	void setDamage();
	CCAR(int x = 0, int y = 0, bool isReverse = false);
	OBSTACLE* create(int x = 0, int y = 0, bool isReverse = false);
	void draw(const int &offset);
	void clear(const int &offset);
	int getColor();
	//void Tell();
	~CCAR();
};
#endif