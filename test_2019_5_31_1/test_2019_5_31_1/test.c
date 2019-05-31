#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//结构体内存对齐
struct s1
{
	char c1;
	int i;
	char c2;
};
struct s2
{
	char c1;
	char c2;
	int i;
};
struct s3
{
	double d;
	char c;
	int i;
};
struct s4
{
	char c1;
	struct s3 s3;
	double d;
};
//struct point
//{
//	int x;
//	int y;
//};
//struct Node
//{
//	int data;
//	struct point p;
//	struct Node* next;
//};
int main()
{
	/*
	struct Node s = { 10, { 1, 2 }, NULL };
	printf("%d\n", s.data);
	printf("%d\n", s.p.x);
	printf("%d\n", s.p.y);*/
	printf("%d\n", sizeof(struct s1));//12
	printf("%d\n", sizeof(struct s2));//8
	printf("%d\n", sizeof(struct s3));//16
	printf("%d\n", sizeof(struct s4));//32
	system("pause");
	return 0;
}