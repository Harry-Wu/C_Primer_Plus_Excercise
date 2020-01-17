//统计输入的文字的字符数量，单词数量和行数
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdbool.h>
// #include <string.h>  //使用strlen()时用到
#define STOP '|'  //以|字符作为停止标记

int main(int argc, char const *argv[])
{
	char ch;  //读入字符
	char prevCh;  //前一个字符
	long n_chars = 0L;  //字符数
	int n_words = 0;  //单词数
	int n_lines = 0;  //行数
	int p_lines = 0;  //不完整的行数
	bool inword = false;  //判断char是否在一个单词中
	printf("Enter text to be analyzed, enter | to terminate:\n"); 
	while ((ch = getchar()) != STOP)  //当没有遇到结束符时
	{		
		n_chars++;  //统计字符
		if (ch == '\n')
			n_lines++;  //统计行
		
		if (!isspace(ch) && !inword)  //如果字符不是空格，并且标志不在单词中
		{
			inword = true;  //就开始统计一个新单词
			n_words++;  //统计单词
		}
		if (isspace(ch) && inword) //如果字符是空格，并且标志还显示在单词中
			inword = false;  //将标志置为不在单词中
		prevCh = ch;  //保存字符
			
	}

	if (prevCh != '\n')
	{
		p_lines = 1;  //统计不完整行
		printf("The last line is incomplet line, the last character = %c\n", ch);

	}
	printf("characters = %ld, words = %d, lines = %d.\n", n_chars, n_words, n_lines);

	getch();
	return 0;
}


