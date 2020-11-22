#include <stdio.h>
#include <windows.h>
#include <math.h>

int IsNarcissus(int x)
{
	//1.��λ��
	int num = 0;
	int temp = x;
	while (temp){
		temp /= 10;
		num++;
	}
	//2.���
	//3.��num�η�
	//4.���ۼ�
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
	//��ӡˮ�ɻ���
	//���0~100000֮������С�ˮ�ɻ����������
	for (int i = 0; i < 100000; i++){
		if (IsNarcissus(i)){
			printf("%d ",i);
		}
	}
	printf("\n");

	system("pause");
	return 0;

}
