#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//联合体成员共用一个内存空间
//enum sex//枚举常量
//{
//	//MALE = 1,//赋初值
//	//FEMALE = 2,
//	//SECRET=3
//	MALE,//从0开始递增
//	FEMALE,
//	SECRET
//};
//int check_sys()
//{
//	union 
//	{
//		int i;
//		char c;
//	}un;
//	un.i = 1;
//	return un.c;
//}
union un1
{
	char c[5];//需要5个字节，4个字节不够，因此为8
	int i;
};//8
union un2
{
	short c[7];//需要14个字节，4个字节不够，因此为16
	int i;
};//16
int main()
{
	//printf("%d\n", MALE);
	//printf("%d\n", FEMALE);
	//printf("%d\n", SECRET);
	/*int ret = check_sys();
	if (ret == 1)
		printf("是小端\n");
	else
		printf("是大端\n");
*/
	printf("%d\n", sizeof(union un1));
	printf("%d\n", sizeof(union un2));
	system("pause");
	return 0;
}