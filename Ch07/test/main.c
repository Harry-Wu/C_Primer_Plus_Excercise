//统计输入的文字的字符数量，单词数量和行数
#include <stdio.h>
#include <conio.h>
#include <ctype.h> //用于检测和转换单个字符的函数
#include <stdbool.h> //定义了一个布尔类型，于C99中加入
// #include <string.h>  //使用strlen()时用到
#define STOP '|'  //以|字符作为停止标记

int main(int argc, char const *argv[])
{
	
	bool bl = 100 > 3 && 'a' > 'c';  //判断表达式真假
	printf("The value of expression is %d.\n", bl); 
	bl = 100 > 3 || 'a' > 'c';  //判断表达式真假
	printf("The value of above expression is %d.\n", bl); 
	
	getch();
	return 0;
}


