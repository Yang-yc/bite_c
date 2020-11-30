#include <stdio.h>
#include <windows.h>
#include <assert.h>

//strcmp函数是string compare(字符串比较)的缩写，用于比较两个字符串并根据比较结果返回整数。
//基本形式为strcmp(str1, str2)
//	若str1 = str2，则返回零；
//	若str1<str2，则返回负数；
//	若str1>str2，则返回正数。
int CompString(const void *xp, const void *yp)
{
	const char *xs = *(char **)xp;
	const char *ys = *(char **)yp;
	return strcmp(xs, ys);
}

void swap(char *p, char *q, size_t num)
{
	while (num){
		char temp = *p;
		*p = *q;
		*q = temp;
		num--;
		p++, q++;
	}
}
//size_t为无符号数
void my_qsort(void *base, size_t num, size_t size, \
	int(*comp)(const void *, const void *))
{
	assert(base);
	assert(comp);

	char *p = (char *)base;
	//控制的是循环趟数
	for (size_t i = 0; i < num - 1; i++){
		//一趟冒泡
		int flag = 0;
		for (size_t j = 0; j < num - 1; j++){
			if (comp(p + j * size, p + (j + 1) * size)>0){
				//交换
				swap(p + j * size, p + (j + 1) * size, size);
				flag = 1;
			}
		}

		if (flag == 0){
			break;
		}
	}
}

int main()
{
	char *arr[] = {
		"a1asd",
		"a3asd",
		"a4asf",
		"a2asdf",
		"a5dsf",
		"absad",
	};
	int num = sizeof(arr) / sizeof(arr[0]);
	my_qsort(arr, num, sizeof(char *), CompString);

	system("pause");
	return 0;
}