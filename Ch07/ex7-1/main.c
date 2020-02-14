//读取输入直到遇到#字符，然后报告读取的空格数目、读取的换行符数目以及读取的所有其他字符数目
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
	long n_space = 0L;				 //空格数
	int n_lines = 0;				 //换行符数
	long n_others = 0L;				 //其他字符数
	printf("Enter text to be analyzed, enter # to terminate:\n");
	while ((ch = getchar()) != STOP) //当没有遇到结束符时
	{
		n_chars++; //统计字符
		if (ch == '\n')
			n_lines++; //统计行
		else if (ch == ' ') 
			n_space++;	 //统计空格
		else n_others++;  //统计其他字符
	}
	printf("characters = %ld, spaces = %ld, lines = %d, other characters = %ld.\n", n_chars, n_space, n_lines, n_others);

	getch();
	return 0;
}


