#include "Enemy.h"

Enemy::Enemy()
{
	enemyPosX = 500;
	enemyPosY = 100;
	enemySpeed = 10;
}

void Enemy::Drow()
{
	Novice::DrawEllipse(getX(), getY(), 50, 50, 0.0f, RED, kFillModeSolid);
}

void Enemy::Initalize()
{
	enemyPosX = 1280 / 2;
	enemyPosY = 720 / 2;

}

void Enemy::move()
{
	enemyPosX += enemySpeed;



	if (enemyPosX < 0)
	{
		enemySpeed *= -1;
	}

	if (enemyPosX > 1280)
	{
		enemySpeed = -enemySpeed;
	}
}


