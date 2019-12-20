//定义一个带参数的函数，并在main函数中调用
#include <stdio.h>
#include <conio.h>  //如果不用getch()来暂停控制台，这个头文件可以去掉

void pound(int n);  //声明函数

int main(int argc, char const *argv[])
{
	int times = 5;
	char ch = '!';
	float f = 6.0;
	pound(times);
	pound(ch);
	pound(f);

	getch();
	// system("PAUSE");
	return 0;
}

//根据输入的参数打印相应数量的#号
void pound(int n)
{
	printf("%d '#' will be printed.\n", n);
	while (n-- > 0)
		printf("#");
	printf("\n");
}
