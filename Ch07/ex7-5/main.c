//��ȡ����ֱ������#���ã�����ÿһ����ţ���ԭ���ģ������������棬��󱨸�����˶��ٴ��滻��
#include <stdio.h>
#include <conio.h>
#include <ctype.h> //���ڼ���ת�������ַ��ĺ���
#include <stdbool.h> //������һ���������ͣ���C99�м���
// #include <string.h>  //ʹ��strlen()ʱ�õ�
#define STOP '#'  //��#�ַ���Ϊֹͣ���

int main(int argc, char const *argv[])
{
	char ch;
	
	
	printf("Enter string to convert, enter # to terminate:\n");
	while ((ch = getchar()) != STOP)
	{
		if (ch == '.')
			printf("!"); 
		else if (ch == '!')
			printf("!!"); 
		else printf("%c", ch);
	}
	
	getch();
	return 0;
}


