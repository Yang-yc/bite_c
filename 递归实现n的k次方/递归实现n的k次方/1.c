#include<stdio.h>
#include<windows.h>

int fun(int n, int m)
{
	if (m == 1){
		return n;
	}
	return n * fun(n, m - 1);
}

int main()
{
	int n = 2;
	int m = 10;
	int res = fun(n, m);
	printf("%d\n", res);
	system("pause");
	return 0;
}