#include "game.h"

void Menu()
{
	printf("###########################\n");
	printf("## 1.Play        2. Exit ##\n");
	printf("###########################\n");
	printf("请输入# ");
}
void SetMines(char board[][COL], int row, int col)
{
	int num = NUMS;
	while (num){
		int x = rand() % 10 + 1;
		int y = rand() % 10 + 1;
		if (board[x][y] == '0'){
			board[x][y] = '1';
			num--;
		}
	}
}
int GetNums(char board[][COL], int row, int col, int x, int y)
{
	return board[x - 1][y - 1] + board[x - 1][y] + \
		board[x - 1][y + 1] + board[x][y + 1] + \
		board[x + 1][y + 1] + board[x + 1][y] + \
		board[x + 1][y - 1] + board[x][y - 1] - 8 * '0';
}

void ShowBoard(char board[][COL], int row, int col)
{
	printf("  ");
	for (int i = 1; i < col - 1; i++){
		printf(" %2d ", i);
	}
	printf("\n");
	printf("-------------------------------------------\n");
	for (int i = 1; i < row - 1; i++){
		printf("%2d|", i);
		for (int j = 1; j < col - 1; j++){
			printf(" %c |", board[i][j]);
		}
		printf("\n");
		printf("-------------------------------------------\n");
	}
}

void Game()
{
	system("cls");
	srand((unsigned long)time(NULL));
	char show_board[ROW][COL];
	char mine_board[ROW][COL];

	memset(show_board, '*', sizeof(show_board));
	memset(mine_board, '0', sizeof(mine_board));

	SetMines(mine_board, ROW, COL);
	int count = (ROW - 2)*(COL - 2) - NUMS;
	int x = 0;
	int y = 0;
	do{
		ShowBoard(show_board, ROW, COL);
		printf("请输入坐标# ");
		scanf("%d %d", &x, &y);
		if (x < 1 || x > ROW - 2 || y < 1 || y > COL - 2){
			printf("输入位置越界，请重新输入!\n");
			continue;
		}
		if (show_board[x][y] != '*'){
			printf("该位置已经被排除!\n");
			continue;
		}
		if (mine_board[x][y] == '1'){
			break;
		}
		int num = GetNums(mine_board, ROW, COL, x, y);
		show_board[x][y] = num + '0';
		count--;
		system("cls");
	} while (count > 0);
	if (count > 0){
		printf("你被炸死了!\n");
		ShowBoard(mine_board, ROW, COL);
	}
	else{
		printf("恭喜，你通过游戏!\n");
	}
}
