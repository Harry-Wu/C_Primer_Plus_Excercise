//��ȡ����ֱ������#�ַ�����ӡÿ�������ַ��Լ�����ʮ����ASCII��
#include <stdio.h>
#include <conio.h>
#include <ctype.h> //���ڼ���ת�������ַ��ĺ���
#include <stdbool.h> //������һ���������ͣ���C99�м���
// #include <string.h>  //ʹ��strlen()ʱ�õ�
#define STOP '#'  //��#�ַ���Ϊֹͣ���

int main(int argc, char const *argv[])
{
	char ch;						 //�����ַ�
	long n_chars = 0L;				 //�ַ���
	
	printf("Enter text to be convert, enter # to terminate:\n");
	while ((ch = getchar()) != STOP) //��û������������ʱ
	{
		n_chars++; //ͳ���ַ�
		printf("%c:%d", ch, ch);
		if (n_chars % 8 == 0)  //����ַ����ﵽ8�ˣ�������
			printf("\n"); 
		else printf("	"); //tab����
		if (ch == '\n')
			n_chars = 0;
	}
	
	//printf("characters = %ld, spaces = %ld, lines = %d, other characters = %ld.\n", n_chars, n_space, n_lines, n_others);

	getch();
	return 0;
}


