//根据输入的字母打印出此字母开头的金字塔
#include <stdio.h>
#include <conio.h>
#define SIZE 26

int main(int argc, char const *argv[])
{
	char letter;
	int count;
	printf("Please input an uppercase letter(input other character to quit): ");
	scanf("%c", &letter);
	while (letter >= 'A' && letter <= 'Z')
	{
		count = 'Z' - letter;
		for (int i = 0; i <= count; ++i) //按行打印
		{
			for (int j = 0; j < count - i; j++) //每一行要打印的空格字符
			{
				printf("  ");
			}
			for (int k = 0; k < i + 1; k++)
			{
				printf("%-2c", letter + k);
			}
			for (int k = i - 1; k >= 0; k--)
			{
				printf("%-2c", letter + k);
			}
			printf("\n");
		}
		printf("Please input NEXT uppercase letter(input other character to quit): ");
		fflush(stdin); //具体原因见此篇文章：https://www.cnblogs.com/VIPler/p/6906434.html

		scanf("%c", &letter);
	}
	printf("输入超范围，转换结束。\n");


	getch();
	return 0;
}


