#include "Bullet.h"
#include <Novice.h>


Bullet::Bullet()
{
	bulletSpeed = 0;
	bulletPosX = -100;
	bulletPosY = -100;
}

void Bullet::SetPosition(int x, int y)
{
	bulletPosX = x;
	bulletPosY = y;
}

void Bullet::Initalize()
{
	bulletPosX = -100;
	bulletPosY = -100;
}

void Bullet::Drow()
{
	Novice::DrawEllipse(bulletGetX(), bulletGetY(), 20, 20, 0.0f, WHITE, kFillModeSolid);
}

void Bullet::shot(char keys[], char preKeys[], int x, int y)
{

	if (keys[DIK_SPACE] != 0 && preKeys[DIK_SPACE] == 0 && isTrue == false) {
		bulletPosX = x;
		bulletPosY = y;
		isTrue = true;
	}

	if (isTrue == true)
	{
		bulletSpeed = -10;
		bulletPosY += bulletSpeed;
		if (bulletPosY < -50)
		{
			bulletSpeed = 0;
			isTrue = false;
		}
	}
}

