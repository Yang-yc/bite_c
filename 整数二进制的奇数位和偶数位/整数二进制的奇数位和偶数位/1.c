#include <stdio.h>
#include <windows.h>

void ShowBits(int x)
{
	//FEAE0000
	//1111 1110 1010 1110 0000 0000 0000 0000 
	
	//偶数
	//1111 1111 0000 0000  
	for (int i = 31; i > 0 ; i -= 2){
		if (x&(1 << i)){
			printf("1 ");
		}
		else{
			printf("0 ");
		}
	}
	printf("\n");
	//奇数
	//1110 0010 0000 0000 
	for (int i = 30; i >= 0; i -= 2){
		if (x&(1 << i)){
			printf("1 ");
		}
		else{
			printf("0 ");
		}
	}
}

int main()
{
	//获取一个整数二进制序列所有的偶数位和奇数位，分别打印出二进制序列
	int x = 0xFEAE0000;
	ShowBits(x);

	system("pause");
	return 0;
}
