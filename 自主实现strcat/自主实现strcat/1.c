#include <stdio.h>
#include <string.h>
#include <assert.h>
#pragma waring(disable:4996)

char *my_strcat(char *src, char *dst)
{
	assert(src);
	assert(dst);
	char *start = src;
	while (*start){
		start++;
	}
	while (*start = *dst){
		start++;
		dst++;
	}
	return src;
}


int main()
{
	char src[32] = "abcd1234";
	my_strcat(src, "hello");
	printf("%s\n", src);

	system("pause");
	return 0;
}