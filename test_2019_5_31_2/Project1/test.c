#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
//дһ���꣬����ṹ����ĳ����������׵�ַ��ƫ��(offsetof��)
struct S
{
	char c1;
	int i;
	char c2;
};
#define my_offsetof(structName,memName)\
	(int)&(((structName*)0)->memName)//'\'Ϊ���з�
int main()
{
	printf("%d\n", my_offsetof(struct S, c1));//0ƫ����
	printf("%d\n", my_offsetof(struct S, i));//4
	printf("%d\n", my_offsetof(struct S, c2));//8
	system("pause");
	return 0;
}