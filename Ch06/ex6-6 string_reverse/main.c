//��������ַ��������ӡ
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
	for (int i = strlen(str); i> 0; i--) //�����ӡ
	{
		printf("%c", str[i-1]);
	}
	printf("\nReverse finished.\n");


	getch();
	return 0;
}


