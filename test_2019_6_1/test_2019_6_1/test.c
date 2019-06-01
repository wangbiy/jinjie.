#define _CRT_SECURE_NO_WARNINGS1 
#include <stdio.h>
#include <stdlib.h> 
#include <assert.h>
#include <string.h>
#include <malloc.h>
//realloc模拟实现
void* my_realloc(void* memblock, size_t size)
{
	void* new_base = malloc(size);//开辟新空间
	assert(new_base != NULL);
	memcpy(new_base, memblock, size);//拷贝原内容
	free(memblock);//释放原空间
	memblock = new_base;//改变指针方向
	return new_base;//返回新开辟空间的地址
}
int main()
{
	int *p;
	int i;
	p = (int*)malloc(sizeof(int)* 5);
	if (p == NULL)
	{
		printf("malloc fail\n");
		return -1;
	}
	for (i = 0; i < 5; ++i)
	{
		p[i] = i + 1;
	}
	p = (int*)my_realloc(p, sizeof(int)* 10);
	if (p == NULL)
	{
		printf("realloc fail\n");
		return -1;
	}
	for (i = 5; i < 10; ++i)
	{
		p[i] = i + 1;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", p[i]);
	}
	printf("\n");
	free(p);
	system("pause");
	return 0;
}