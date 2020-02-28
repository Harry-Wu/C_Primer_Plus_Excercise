//打开文件，并将文件的内容打印到屏幕上。用！代替每一个句号，将原来的！用两个！代替，最后报告出现了多少次替换。
//直接运行main.exe可以正常打开文件，但是的debug时即使使用绝对路径却依然不行，不知怎么回事
#include <stdio.h>
#include <stdlib.h>  //为了使用exit()
#include <conio.h>  //使用getch()函数
#include <ctype.h> //用于检测和转换单个字符的函数
#include <stdbool.h> //定义了一个布尔类型，于C99中加入
// #include <string.h>  //使用strlen()时用到
#define STOP '#'  //以#字符作为停止标记

int main(int argc, char const *argv[])
{
	int ch;
	FILE *fp;
	char fname[200];  //存放文件名

	
	printf("Enter the name of the file:");
	//scanf("%s", fname);  //输入文件完整路径名，有空格时后面的字符串会被忽略
	//fgets(fname, sizeof(fname), stdin);  //此函数可以获取带空格的完整字符串，但字符串末尾是\n而不是结束符\0
	//fname[strcspn(fname, "\n")] = '\0';  //可以通过此行代码将末尾的\n换成\0
	gets(fname);
	printf("File name is %s\n", fname);
	fp = fopen(fname, "r"); //只读方式打开文件
	if (fp == NULL)
	{
		printf("Failed to open file. Bye.\n");
		//exit(1);  //终止程序
	}
	// getc(fp) -- 功能是从打开的文件中获取一个字符
	while ((ch = getc(fp)) != EOF)  //在windows系统，在一个新行开头输入按Ctrl+Z可模拟EOF
	{
		if (ch == '.')
			printf("!"); 
		else if (ch == '!')
			printf("!!"); 
		else printf("%c", ch);
	}
	fclose(fp);  //关闭文件
	
	getch();
	return 0;
}


