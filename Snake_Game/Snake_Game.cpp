﻿#include <iostream>
#include <conio.h>
#include <windows.h>
#include "Game_Master.h"


/*
	Так ёбана пара думать архитектуру

	Давай обдумаем первую канцепцию

	Три сущности
		*Змея
		*Мапа
		*ГеймМенеджер "пускай будет так называться"

	В змее будет храниться
		*Её расположение
		*Её шаг - за шаг будет отвичать функция принимающая char
			в которуб мы будем класть чак с помащью супер функций _kbhit - _getch
		*Пропы для отрисовка, всякие чары которыу будут браться для отрисовки змеи
		*!!!! Отдельным сталпом будет массив в котором будет храниться хвост, фактически это будет
			набор такихже змей с каординатами и шагами, Хотя нужно сделать по умному и перересовывать
			только голову и хвост

	ГеймМенеджер будет отвичать
		*За главное меню
		*за настройки сложности
		*выбора раздных мап
		*и за контролько скорости

	ГеймМенеджер посуте лишный и добовляет лишь красоту, хоть и будет содержать в себе логику
		передовая и наверное храня в себе змею и мапу 
		
	
 */


int main()
{
	setlocale(LC_ALL, "ru");
	using namespace std;

	Game_Master game;
	game.Start_Game();

	int time = game.GetTimeTact();
	
	
	char PlayerImput = 'f';

	while(true)
	{
 		if(_kbhit())
		{
			PlayerImput = _getch();
		}
		game.Tick(PlayerImput);

		Sleep(time);
		system("cls");
	}
	
}

