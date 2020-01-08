//计算0度以下的天数的百分比
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
// #include <string.h>  //使用strlen()时用到

int main(int argc, char const *argv[])
{
	char ch;
	printf("Enter the string, each letter will be shift 1 value.\n"); 
	while ((ch = getchar()) != '\n')  //当没有到换行时
	{		
		if (isalpha(ch))  //如果是一个字母
			putchar(ch + 1);
		else
			putchar(ch);
			
	}
	putchar(ch); //打印换行符

	getch();
	return 0;
}


