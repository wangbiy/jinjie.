#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int FindNum(int arr[], int n)
{
	int i;
	int result = arr[0];
	for (i = 1; i < n; ++i)//�������������ɶԳ��ֵ�
	{
		result^= arr[i];
	}
	return result;
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 5, 4, 3, 2, 1, 9 };
	int size = sizeof(arr) / sizeof(int);
	printf("%d\n", FindNum(arr, size));
	system("pause");
	return 0;
}