#include <stdio.h>
#include <windows.h>
#include <math.h>

int IsNarcissus(int x)
{
	//1.求位数
	int num = 0;
	int temp = x;
	while (temp){
		temp /= 10;
		num++;
	}
	//2.拆分
	//3.求num次方
	//4.并累加
	int result = 0;
	temp = x;
	while (temp){
		int data = temp % 10;
		result += (int)pow(data, num);
		temp /= 10;
	}
	
	return result == x;
}


int main()
{
	//打印水仙花数
	//求出0~100000之间的所有“水仙花数”并输出
	for (int i = 0; i < 100000; i++){
		if (IsNarcissus(i)){
			printf("%d ",i);
		}
	}
	printf("\n");

	system("pause");
	return 0;

}
