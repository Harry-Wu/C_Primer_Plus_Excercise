//��ȡ����ֱ������#�ַ���Ȼ�󱨸��ȡ�Ŀո���Ŀ����ȡ�Ļ��з���Ŀ�Լ���ȡ�����������ַ���Ŀ
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
	long n_space = 0L;				 //�ո���
	int n_lines = 0;				 //���з���
	long n_others = 0L;				 //�����ַ���
	printf("Enter text to be analyzed, enter # to terminate:\n");
	while ((ch = getchar()) != STOP) //��û������������ʱ
	{
		n_chars++; //ͳ���ַ�
		if (ch == '\n')
			n_lines++; //ͳ����
		else if (ch == ' ') 
			n_space++;	 //ͳ�ƿո�
		else n_others++;  //ͳ�������ַ�
	}
	printf("characters = %ld, spaces = %ld, lines = %d, other characters = %ld.\n", n_chars, n_space, n_lines, n_others);

	getch();
	return 0;
}


