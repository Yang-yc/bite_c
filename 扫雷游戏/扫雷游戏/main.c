#include "game.h"

int main()
{
	int quit = 0;
	int select = 0;
	while (!quit){
		Menu();
		scanf("%d", &select);

		switch (select){
		case 1:
			Game();
			break;
		case 2:
			quit = 1;
			break;
		default:
			printf("输入有误，请重新选择!\n");
			break;
		}
	}
	printf("ByeBye!\n");

	system("pause");
	return 0;
}