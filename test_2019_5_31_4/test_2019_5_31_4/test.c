#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//�������Ա����һ���ڴ�ռ�
//enum sex//ö�ٳ���
//{
//	//MALE = 1,//����ֵ
//	//FEMALE = 2,
//	//SECRET=3
//	MALE,//��0��ʼ����
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
	char c[5];//��Ҫ5���ֽڣ�4���ֽڲ��������Ϊ8
	int i;
};//8
union un2
{
	short c[7];//��Ҫ14���ֽڣ�4���ֽڲ��������Ϊ16
	int i;
};//16
int main()
{
	//printf("%d\n", MALE);
	//printf("%d\n", FEMALE);
	//printf("%d\n", SECRET);
	/*int ret = check_sys();
	if (ret == 1)
		printf("��С��\n");
	else
		printf("�Ǵ��\n");
*/
	printf("%d\n", sizeof(union un1));
	printf("%d\n", sizeof(union un2));
	system("pause");
	return 0;
}