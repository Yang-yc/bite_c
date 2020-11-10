#include <stdio.h>
#include <windows.h>

int DiffBits(int x, int y)
{
	int z = x^y;
	int count = 0;
	while (z){ 
		z &= (z - 1); 
		count++;
	}
	return count;
}

int main()
{
	int x = 1234;
	int y = 4321;
	int num = DiffBits(x, y);
	printf("%d\n", num);

	system("pause");
	return 0;
}