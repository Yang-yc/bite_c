#include<stdio.h>
#include<windows.h>


void StrReverseHelper(char *str, char *start, char *end)
{
	if (start > end){
		return;
	}
	char temp = *start;
	*start = *end;
	*end = temp;

	StrReverseHelper(str, ++start, --end);
}

void StrReverse(char *str, int len)
{
	char *start = str;
	char *end = str + len - 1;
	StrReverseHelper(str, start, end);
}

int main()
{
	char str[] = "abcd1234";
	printf("befor: %s\n", str);
	StrReverse(str, strlen(str));

	printf("after: %s\n", str);


	system("pause");
	return 0;
}