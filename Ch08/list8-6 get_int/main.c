//从用户输入获取一个正整数，并打印到屏幕
#include <stdio.h>
#include <stdlib.h>  //为了使用exit()
#include <conio.h>  //使用getch()函数
#include <ctype.h> //用于检测和转换单个字符的函数
#include <stdbool.h> //定义了一个布尔类型，于C99中加入
// #include <string.h>  //使用strlen()时用到
#define STOP '#'  //以#字符作为停止标记

int main(int argc, char const *argv[])
{
	int num;
	char ch;  //保存非法字符
	int scan_status;
	printf("Enter the positive integer:");
	scan_status = scanf("%d", &num);
	while (scan_status != 1 || num < 0)
	{
		if (scan_status != 1)
		{
			while ((ch = getchar()) != '\n')
				putchar(ch);
			printf(" is not an integer. Please enter an integer.\n");
		}
		else
			printf("Please input a positive integer.\n");

		scan_status = scanf("%d", &num);
	}
	printf("The input positive integer is %d.\n", num);
	
	getch();
	return 0;
}


