#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//位段的使用(int ,signed int,unsigned int,char),不用考虑内存对齐，不能跨平台
struct s
{
	//int为4个字节，即32个bit位
	int a : 2;//用掉2个bit位，剩下30个
	int b : 5;//用掉5个bit位，剩下25个
	int c : 10;//用掉10个bit位，剩下15个
	int d : 30;//不够，再开辟一个int，之前的15个因为编译器的不同决定是否继续使用
};
int main()
{
	printf("%d\n", sizeof(struct s));

	system("pause");
	return 0;
}