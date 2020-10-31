#ifndef _GAME_H_	//防止头文件重复包含
#define _GAME_H_

#include <stdio.h>
#include <time.h>
#include <windows.h>

#define ROW 3
#define COL 3
#define P_COLOR 'X'
#define C_COLOR 'O'

#pragma warning(disable:4996)

void Menu();
void Game();

#endif