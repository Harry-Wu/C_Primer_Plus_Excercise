//���û������ȡһ��������������ӡ����Ļ
#include <stdio.h>
#include <stdlib.h>  //Ϊ��ʹ��exit()
#include <conio.h>  //ʹ��getch()����
#include <ctype.h> //���ڼ���ת�������ַ��ĺ���
#include <stdbool.h> //������һ���������ͣ���C99�м���
// #include <string.h>  //ʹ��strlen()ʱ�õ�
#define STOP '#'  //��#�ַ���Ϊֹͣ���

int main(int argc, char const *argv[])
{
	int num;
	char ch;  //����Ƿ��ַ�
	int scan_status;
	printf("Enter the positive integer:");
	scan_status = scanf("%d", &num);
	while (scan_status != 1 || num < 0)
	{
		if (scan_status != 1)
		{
			while ((ch = getchar()) != '\n')
				putchar(ch);
			printf(" is not an integer. Please enter an integer.\n");
		}
		else
			printf("Please input a positive integer.\n");

		scan_status = scanf("%d", &num);
	}
	printf("The input positive integer is %d.\n", num);
	
	getch();
	return 0;
}


