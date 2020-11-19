#include <stdio.h>
#include <windows.h>
#include <assert.h>

void Print(int *arr, int num)
{
	assert(arr);
	for (int i = 0; i < num; i++){
		printf("%d ", *(arr + i));
	}

	//int *end = arr + num;
	//for (; arr < end; arr++){
	//	printf("%d ", *arr);
	//}
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
	int num = sizeof(arr) / sizeof(arr[0]);
	Print(arr, num);
	
	system("pause");
	return 0;
}
