#pragma once
#include "Map.h"

class Game_Master
{
	Map* map;

	int time_tact;

	/*
	enum KEY_FOR_MENU
	{
		lvl1 = 1,
		lvl2 = 2,
		lvl3 = 3
	};*/
	
public:
	
	//void Menu();
	void Start_Game();
	void Tick(char muve_key);
	
	int Time_Game()
	{
		return time_tact;
	}

	void End_Game(int score);

	int GetTimeTact()
	{
		return time_tact;
	}
	
};


