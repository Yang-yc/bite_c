#include <stdio.h>
#include <string.h>
#include <assert.h>
#pragma warning(disable:4996)

void *my_memmove(void *dst, const void *src, int num)
{
	assert(dst);
	assert(src);

	char *_dst = dst;
	const char *_src = (const char *)src;

	if (_dst > _src && _dst < _src + num){
		//right -> left
		_dst = _dst + num - 1;
		_src = _src + num - 1;
		while (num){
			*_dst = *_src;
			_dst--;
			_src--;
			num--;
		}
	}
	else{
		while (num){
			//left -> right
			*_dst = *_src;
			_dst++;
			_src++;
			num--;
		}
	}

	return dst;

}

int main()
{
	//int a[] = { 12, 3, 4, 5, 6 };
	//int b[10] = { 0 };
	//my_memmove(b, a, sizeof(a));
	char buf[16] = "abcd1234";
	my_memmove(buf + 1, buf, strlen(buf) + 1);
	printf("%s\n", buf);

	system("pause");
	return 0;
}