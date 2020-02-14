//读取输入直到遇到#字符，打印每个输入字符以及它的十进制ASCII码
#include <stdio.h>
#include <conio.h>
#include <ctype.h> //用于检测和转换单个字符的函数
#include <stdbool.h> //定义了一个布尔类型，于C99中加入
// #include <string.h>  //使用strlen()时用到
#define STOP '#'  //以#字符作为停止标记

int main(int argc, char const *argv[])
{
	char ch;						 //读入字符
	long n_chars = 0L;				 //字符数
	
	printf("Enter text to be convert, enter # to terminate:\n");
	while ((ch = getchar()) != STOP) //当没有遇到结束符时
	{
		n_chars++; //统计字符
		printf("%c:%d", ch, ch);
		if (n_chars % 8 == 0)  //如果字符数达到8了，即换行
			printf("\n"); 
		else printf("	"); //tab隔开
		if (ch == '\n')
			n_chars = 0;
	}
	
	//printf("characters = %ld, spaces = %ld, lines = %d, other characters = %ld.\n", n_chars, n_space, n_lines, n_others);

	getch();
	return 0;
}


