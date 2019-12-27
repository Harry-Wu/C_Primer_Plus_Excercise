//将输入的字符串反向打印
#include <stdio.h>
#include <conio.h>
#include <string.h>
#define SIZE 50

int main(int argc, char const *argv[])
{
	char str[SIZE];
	int count;
	printf("Please input the string you want to reverse: ");
	scanf("%s", str);
	for (int i = strlen(str); i> 0; i--) //反向打印
	{
		printf("%c", str[i-1]);
	}
	printf("\nReverse finished.\n");


	getch();
	return 0;
}


