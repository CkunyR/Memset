#include <stdio.h>
#include <string.h>

int main()
{
	char arr[] = "Hello world";
	memset(arr, '*', 5);//注意不要大于目的地址，防止造成溢出！！
	printf("%s", arr);

	return 0;
}