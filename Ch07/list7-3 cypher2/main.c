//����0�����µ������İٷֱ�
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
// #include <string.h>  //ʹ��strlen()ʱ�õ�

int main(int argc, char const *argv[])
{
	char ch;
	printf("Enter the string, each letter will be shift 1 value.\n"); 
	while ((ch = getchar()) != '\n')  //��û�е�����ʱ
	{		
		if (isalpha(ch))  //�����һ����ĸ
			putchar(ch + 1);
		else
			putchar(ch);
			
	}
	putchar(ch); //��ӡ���з�

	getch();
	return 0;
}


