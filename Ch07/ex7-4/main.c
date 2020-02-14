//读取输入直到输入#。用！代替每一个句号，将原来的！用两个！代替，最后报告出现了多少次替换。
#include <stdio.h>
#include <conio.h>
#include <ctype.h> //用于检测和转换单个字符的函数
#include <stdbool.h> //定义了一个布尔类型，于C99中加入
// #include <string.h>  //使用strlen()时用到
#define STOP '#'  //以#字符作为停止标记

int main(int argc, char const *argv[])
{
	char ch;
	
	
	printf("Enter string to convert, enter # to terminate:\n");
	while ((ch = getchar()) != STOP)
	{
		if (ch == '.')
			printf("!"); 
		else if (ch == '!')
			printf("!!"); 
		else printf("%c", ch);
	}
	
	getch();
	return 0;
}


