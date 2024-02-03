#pragma once
#include "Novice.h"

class Enemy
{
private:
	int enemyPosX;
	int enemyPosY;
	int enemySpeed;

public:
	Enemy();

	int getX() const { return enemyPosX; }
	int getY() const { return enemyPosY; }

	void Drow();

	void move();

	void Initalize();
};


