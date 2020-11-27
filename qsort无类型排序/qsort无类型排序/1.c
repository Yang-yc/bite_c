#include <stdio.h>
#include <windows.h>

int CompInt(const void *xp, const void *yp)
{
	int x = *(const int *)xp;
	int y = *(const int *)yp;
	if (x > y){
		return 1;
	}
	else if (x < y){
		return -1;
	}
	else{ 
		return 0;
	}
}
 
int CompString(const void *xp, const void *yp)
{
	const char *xs = *(char **)xp;
	const char *ys= *(char **)yp;
	return strcmp(xs, ys);
}

int main()
{

	int arr[] = { 1, 132, 132, 3, 3126, 6, 06, 54, 365, 654, 3, 6596, 64, 6, 68, 29, 465 };
	int num = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, num, sizeof(int), CompInt);

	char *arr1[] = {
		"a1cdc",
		"abcd",
		"a3cdcd",
		"a4ddd"
	};
	int num1 = sizeof(arr1) / sizeof(arr1[0]);
	qsort(arr1, num1, sizeof(char *), CompString);

	system("pause");
	return 0;
} 
