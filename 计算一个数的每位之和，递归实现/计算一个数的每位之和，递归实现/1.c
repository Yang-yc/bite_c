#include<stdio.h>
#include<windows.h>

int DigitSum(int x)
{
	if (x > 9)
		return DigitSum(x / 10) + x % 10;
	return x;
}

int main()
{
	int x = 1729;
	int res = DigitSum(x);
	printf("%d\n", res);
	
	system("pause");
	return 0;
}