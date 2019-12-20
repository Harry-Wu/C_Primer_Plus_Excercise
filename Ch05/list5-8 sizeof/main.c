//sizeof运算符的使用
#include <stdio.h>
#include <conio.h>  //如果不用getch()来暂停控制台，这个头文件可以去掉
int main(int argc, char const *argv[])
{
	int n = 0;
	size_t intSize;
	intSize = sizeof(int);
	printf("n = %d, n has %lu bytes; all ints have %lu bytes.\n", n, sizeof n, intSize);

	getch();
	// system("PAUSE");
	return 0;
}
