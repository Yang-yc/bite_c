#include <stdio.h>
#include <windows.h>
#include <assert.h>

//strcmp������string compare(�ַ����Ƚ�)����д�����ڱȽ������ַ��������ݱȽϽ������������
//������ʽΪstrcmp(str1, str2)
//	��str1 = str2���򷵻��㣻
//	��str1<str2���򷵻ظ�����
//	��str1>str2���򷵻�������
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
//size_tΪ�޷�����
void my_qsort(void *base, size_t num, size_t size, \
	int(*comp)(const void *, const void *))
{
	assert(base);
	assert(comp);

	char *p = (char *)base;
	//���Ƶ���ѭ������
	for (size_t i = 0; i < num - 1; i++){
		//һ��ð��
		int flag = 0;
		for (size_t j = 0; j < num - 1; j++){
			if (comp(p + j * size, p + (j + 1) * size)>0){
				//����
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