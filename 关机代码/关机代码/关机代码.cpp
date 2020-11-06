#include <stdio.h>
#include <string.h>
#include <windows.h>

#pragma warning(disable:4996)


int main(void)
{
	system("shutdown -a"); //取消关机
	char str[64];
	system("shutdown -s -t 120"); //关机延时120s
	printf("你的机器即将在120s内关机!\n");
Start:
	printf("承认你是猪,就取消关机# ");
	scanf("%s", str);

	if (strcmp(str, "我是猪") == 0){
		system("shutdown -a");
		printf("关机取消!\n");
	}
	else{
		goto Start;
	}

	system("pause");
	return 0;
}