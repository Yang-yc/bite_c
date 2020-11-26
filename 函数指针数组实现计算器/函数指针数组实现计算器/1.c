#include <stdio.h>
#include <windows.h>
#pragma warning(disable:4996)

int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	if (y == 0){
		printf("div zero!\n");
		return -1;
	}
	return x / y;
}

int main()
{
	int quit = 0;
	int(*p[5])(int, int) = { NULL, Add, Sub, Mul, Div };
	while (!quit){
		printf("#################################\n");
		printf("##1. ADD                 2. SUB##\n");
		printf("##3. MUL                 4. DIV##\n");
		printf("##                       5.QUIT##\n");
		printf("#################################\n");
		printf("Please Select: ");
		int select = 0;
		scanf("%d", &select);
		if (select < 1 || select > 5){
			printf("select error, try again!\n");
			continue;
		}
		if (select == 5){
			quit = 1;
			continue;
		}
		int x, y;
		printf("Please Enter Your Data(x, y)#");
		scanf("%d %d", &x, &y);
		int result = p[select](x, y);//×ªÒÆ±í
		printf("result# %d\n", result);
	}
	system("pause");
	return 0;
}