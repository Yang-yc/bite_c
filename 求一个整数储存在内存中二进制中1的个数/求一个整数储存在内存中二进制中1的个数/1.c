#include <stdio.h>
#include <windows.h>


int OneBits1(int x)
{
	int count = 0;
	int num = sizeof(x) * 8;
	for (int i = 0; i < num; i++){
		if (x & 1){
			count++;
		}
		x >>= 1;
	}
	return count;
}

int OneBits2(int x)
{
	int count = 0;
	while (x){
		x &= (x - 1);
		count++;
	}
	return count;
}

int main()
{
	int num = OneBits2(-0xFEFE);
	printf("num = %d\n", num);
	
	system("pause");
	return 0;
}