#include <stdio.h>
#include <windows.h>

int MyStrlen(const char *s)
{
	const char *e = s;
	while (*e){
		++e;
	}
	return e - s;
}

int main()
{
	const char *str = "abcd1234";
	int len = MyStrlen(str);
	printf("%d\n", len);
	
	system("pause");
	return 0;
}
