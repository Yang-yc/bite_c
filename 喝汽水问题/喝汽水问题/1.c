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
	//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ
	//��20Ԫ�����Զ�����ˮ
	int money = 20;
	int total = DrinkSoda(money);
	printf("%d\n", total);

	system("pause");
	return 0;
}