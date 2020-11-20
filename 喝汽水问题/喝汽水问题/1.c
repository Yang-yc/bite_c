#include <stdio.h>
#include <windows.h>

int DrinkSoda(int money)
{
	int total = money;
	int empty = money;
	while (empty > 1){
		total += empty / 2;
		empty = empty / 2 + empty % 2;
	}
	return total;
}

int main()
{
	//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水
	//给20元，可以多少汽水
	int money = 20;
	int total = DrinkSoda(money);
	printf("%d\n", total);

	system("pause");
	return 0;
}