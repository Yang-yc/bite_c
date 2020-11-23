#include <stdio.h>
#include <windows.h>
#include <assert.h>

char *MyStrcpy(char *det, const char *src)
{
	char *ret = det;
	assert(det != NULL);//╤оят
	assert(src != NULL);
	while (*ret = *src)
	{
		ret++;
		src++;
	}
	return det;
}

int main()
{
	const char *src = "abcd1234";
	char det[12];
	MyStrcpy(det, src);
	printf("det: %s\n", det);

	system("pause");
	return 0;

}