#include <stdio.h>
#include <windows.h>
#include <assert.h>

void ReverseString(char *str)
{
	assert(str);
	char *start = str;
	char *end = str + strlen(str) - 1;

	while (start < end){
		char temp = *start;
		*start = *end;
		*end = temp;
		start++, end--;
	}

}

int main()
{
	char str[] = "abcd1234";
	printf("Befor: %s\n", str);
	ReverseString(str);
	printf("After: %s\n", str);

	system("pause");
	return 0;
}
