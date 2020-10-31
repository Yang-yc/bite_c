#include "game.h"

int main()
{
	int quit = 0;
	while (!quit){
		Menu();
		int select = 0;
		scanf("%d", &select);
		switch (select){
		case 1:
			Game();
			break;
		case 2:
			printf("quit!\n");
			quit = 1;
			break;
		default:
			printf("Enter Error! Try Again!\n");
			break;
		}
	}
	printf("ByeBye!\n");
	system("pause");
	return 0;
}