#include <stdio.h>
#include <string.h>
#include <windows.h>

#pragma warning(disable:4996)


int main(void)
{
	system("shutdown -a"); //ȡ���ػ�
	char str[64];
	system("shutdown -s -t 120"); //�ػ���ʱ120s
	printf("��Ļ���������120s�ڹػ�!\n");
Start:
	printf("����������,��ȡ���ػ�# ");
	scanf("%s", str);

	if (strcmp(str, "������") == 0){
		system("shutdown -a");
		printf("�ػ�ȡ��!\n");
	}
	else{
		goto Start;
	}

	system("pause");
	return 0;
}