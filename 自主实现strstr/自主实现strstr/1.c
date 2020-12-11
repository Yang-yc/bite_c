#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <assert.h>
#pragma warning(disable:4996)



const char *my_strstr(const char *str, const char *sub_str)
{
	assert(str);
	assert(sub_str);
	while (*str){//确定起始位置
		const char *p = str;
		const char *q = sub_str;
		while (*p && *q && *p == *q){//局部比较
			p++, q++;
		}
		if (*q == '\0'){
			return str;
		} 
		str++;
		
	}

	return NULL;
}

int main()
{
	const char *str = "abc 123 abcd 1234 abcdef";
	const char *sub_str = "1234";
	printf("%s\n", my_strstr(str, sub_str));
	//puts(my_strstr(str, sub_str));

	system("pause");
	return 0;
} 