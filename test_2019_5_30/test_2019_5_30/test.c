#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
int my_strcmp(const char *dest, const char *src)
{
	int ret = 0;
	assert(dest&&src);
	while (!(ret = *(unsigned char*)dest - *(unsigned char*)src) && *src)
	{
		dest++;
		src++;
	}
	if (ret > 0)
		ret = 1;
	else if (ret < 0)
		ret = -1;
	return ret;
}
int main()
{
	char arr1[] = "abcdefg";
	char arr2[] = "abcd";
	int ret = my_strcmp(arr1, arr2);
	printf("ret=%d\n", ret);
	system("pause");
	return 0;
}