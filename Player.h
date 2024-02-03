#pragma once
class Player
{
private:
	int playerPosX;
	int playerPosY;
	int playerSpeedX;
	int playerSpeedY;

public:
	Player();

	int playerGetX() { return playerPosX; }
	int playerGetY() { return playerPosY; }

	void Drow();

	void move(char keys[]);

	void Initalize();

	void shoot();
};



