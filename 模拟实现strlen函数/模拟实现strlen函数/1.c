#include <stdio.h>
#include <assert.h>
#include <windows.h>

int StrLen(const char *s)
{
	assert(s != NULL);
	const char *e = s;
	while (*e)
	{
		e++;
	}
	return e - s;
}
int main()
{
	const char *str = "abcd1234";
	int len = StrLen(str);
	printf("%d\n", len);

	system("pause");
	return 0;
}