#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//int main()
//{
//	int *p = (int*)calloc(10, sizeof(int));
//	int i = 0;
//	if (NULL == p)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	for (i = 0; i < 10; ++i)
//	{
//		p[i] = i + 1;
//		printf("%d ", *(p + i));
//	}
//	printf("\n");
//	free(p);
//	p = NULL;
//	system("pause");
//	return 0;
//}
int main()
{
	int *p = (int*)malloc(INT_MAX);
	if (NULL == p)
	{
		perror("use malloc");
		system("pause");
		return 0;
	}
	return 0;
}