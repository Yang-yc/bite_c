#include <stdio.h>

int check_sys()
{
	int i = 1;
	return (*(char *)&i);
}

int main()
{
	int ret = check_sys();
	if (ret == 1){
		printf("С��\n");
	}
	else{
		printf("���\n");
	}

	system("pause");
	return 0;
}