#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//λ�ε�ʹ��(int ,signed int,unsigned int,char),���ÿ����ڴ���룬���ܿ�ƽ̨
struct s
{
	//intΪ4���ֽڣ���32��bitλ
	int a : 2;//�õ�2��bitλ��ʣ��30��
	int b : 5;//�õ�5��bitλ��ʣ��25��
	int c : 10;//�õ�10��bitλ��ʣ��15��
	int d : 30;//�������ٿ���һ��int��֮ǰ��15����Ϊ�������Ĳ�ͬ�����Ƿ����ʹ��
};
int main()
{
	printf("%d\n", sizeof(struct s));

	system("pause");
	return 0;
}