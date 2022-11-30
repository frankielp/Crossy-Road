#ifndef canimalh
#define canimalh
#include "header.h"

using namespace std;

class CDINOSAUR: public OBSTACLE{
public:
	static const int height = 3;
    static const int width = 7;
	static const int damage = 5;

	void sound();
	CDINOSAUR(int x = 0, int y = 0, bool isReverse = false);
	OBSTACLE* create(int x = 0, int y = 0, bool isReverse = false);
	void draw(const int &offset);
	void clear(const int &offset);

	int getColor();
};

class CBIRD: public OBSTACLE{
private:
    int frames;
    vector<string*> visuals;
public:
	static const int height = 3;
    static const int width = 7;
	static const int damage = 2;

	void sound();
	CBIRD(int x = 0, int y = 0, bool isReverse = false);
	OBSTACLE* create(int x = 0, int y = 0, bool isReverse = false);
	void draw(const int &offset);
	void clear(const int &offset);
	~CBIRD();

	int getColor();
};

class CDUCK: public OBSTACLE{
private:
    int frames;
    vector<string*> visuals;
public:
	static const int height = 3;
    static const int width = 7;
	static const int damage = 2;

	void sound();
	CDUCK(int x = 0, int y = 0, bool isReverse = false);
	OBSTACLE* create(int x = 0, int y = 0, bool isReverse = false);
	void draw(const int &offset);
	void clear(const int &offset);
	~CDUCK();

	int getColor();
};

#endif 