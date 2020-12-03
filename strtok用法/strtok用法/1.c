#include <stdio.h>
#include <string.h>
#include <windows.h>
#pragma warning(disable:4996)

int main()
{
	char str[] = "Tom,hello:world#hello;bit";
	char *sub = NULL;
	int flag = 0;
	do{
		if (flag){
			sub = strtok(NULL, ",:#;");
		}
		else{
			sub = strtok(str, ",:#;");
			flag = 1;
		}
		printf("sub: %s\n", sub);
	} while (sub != NULL);

	system("pause");
	return 0;
}