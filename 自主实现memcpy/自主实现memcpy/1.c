#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

void *my_memcpy(void *dst, const void *src, int num)
{
	assert(dst);
	assert(src);

	char *_dst = dst;
	const char *_src = (const char *)src;

	while (num){
		*_dst = *_src;
		_dst++;
		_src++;
		num--;
	}
	return dst;
	
}

int main()
{
	int a[] = { 12, 3, 4, 5, 6 };
	int b[10] = { 0 };
	my_memcpy(b, a, sizeof(a));

	system("pause");
	return 0;
}