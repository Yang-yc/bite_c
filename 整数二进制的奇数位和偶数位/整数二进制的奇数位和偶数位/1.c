#include <stdio.h>
#include <windows.h>

void ShowBits(int x)
{
	//FEAE0000
	//1111 1110 1010 1110 0000 0000 0000 0000 
	
	//ż��
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
	//����
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
	//��ȡһ�������������������е�ż��λ������λ���ֱ��ӡ������������
	int x = 0xFEAE0000;
	ShowBits(x);

	system("pause");
	return 0;
}
