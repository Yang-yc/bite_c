#include <stdio.h>
#include <windows.h>

int main()
{
	int a = 100;
	int b = 50;

	printf("a = %d, b = %d\n", a, b);

	//ÓĞÒç³ö·çÏÕ
	a = a + b;
	b = a - b;
	a = a - b;

	printf("a = %d, b = %d\n", a, b);

	system("pause");
	return 0;
}