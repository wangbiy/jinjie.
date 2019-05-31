#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
//写一个宏，计算结构体中某变量相对于首地址的偏移(offsetof宏)
struct S
{
	char c1;
	int i;
	char c2;
};
#define my_offsetof(structName,memName)\
	(int)&(((structName*)0)->memName)//'\'为续行符
int main()
{
	printf("%d\n", my_offsetof(struct S, c1));//0偏移量
	printf("%d\n", my_offsetof(struct S, i));//4
	printf("%d\n", my_offsetof(struct S, c2));//8
	system("pause");
	return 0;
}