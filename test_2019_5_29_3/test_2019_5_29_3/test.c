#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
unsigned int reverse_bit(unsigned int value)
{
	unsigned int v = 0;
	unsigned int result = 0;
	//第一种方法
	/*for (int i = 0; i < 31; ++i)
	{
		v = value &1;
		result = result|v;
		result = result << 1;
		value = value >> 1;
	}*/
	for (int i = 0; i < 32; i++)
	{
		v = value & 1;
		value >>= 1;
		result |= (v << (32 - i - 1));//第二种方法
		/*result += v * pow(2, 32 - i - 1);*///第三种方法
	}
	return result;
}
int main()
{
	unsigned int value = 25;
	printf("%u\n", reverse_bit(value));
	system("pause");
	return 0;
}