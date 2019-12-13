#include <stdio.h>
#include <conio.h>  //如果不用getch()来暂停控制台，这个头文件可以去掉
int main(int argc, char const *argv[])
{
	char name[20];
	printf("Please enter your name: ");
	scanf("%s", name);
	printf("你的名字在双引号中这样显示: \"%s\"\n", name);
	printf("你的名字在20个字段内这样显示: \"%20s\"\n", name);
	printf("你的名字在20个字段内靠左这样显示: \"%-20s\"\n", name);
	printf("比名字宽3个字符这样显示: \"%*s\"\n", strlen(name)+3, name);

	getch();
	// system("PAUSE");
	return 0;
}
