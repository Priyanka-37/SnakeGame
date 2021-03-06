#pragma once
#include"Defination.hpp"
#include"State.hpp"
#include"Game.hpp"
#include"Snake.hpp"
#include"Food.hpp"
class Level_03 : public State
{
public:
	Level_03(GameDataRef data, int score);
	~Level_03();

	void init() override;
	void handleInput() override;
	void update() override;
	void draw() override;
private:
	GameDataRef data;
	Snake snake;
	Food food;
	sf::Sprite grassBackground;
	sf::Sprite StoneGrassBorder;
	sf::Sprite pauseButton;
	sf::Clock clk;
	float timePerFrame;
	float timer;
	float delay;
	float BounusFoodTimer;
	float BounsFoodDelay;
	bool isMouseButtonReleased;
};

