//ͳ����������ֵ��ַ���������������������
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdbool.h>
// #include <string.h>  //ʹ��strlen()ʱ�õ�
#define STOP '|'  //��|�ַ���Ϊֹͣ���

int main(int argc, char const *argv[])
{
	char ch;  //�����ַ�
	char prevCh;  //ǰһ���ַ�
	long n_chars = 0L;  //�ַ���
	int n_words = 0;  //������
	int n_lines = 0;  //����
	int p_lines = 0;  //������������
	bool inword = false;  //�ж�char�Ƿ���һ��������
	printf("Enter text to be analyzed, enter | to terminate:\n"); 
	while ((ch = getchar()) != STOP)  //��û������������ʱ
	{		
		n_chars++;  //ͳ���ַ�
		if (ch == '\n')
			n_lines++;  //ͳ����
		
		if (!isspace(ch) && !inword)  //����ַ����ǿո񣬲��ұ�־���ڵ�����
		{
			inword = true;  //�Ϳ�ʼͳ��һ���µ���
			n_words++;  //ͳ�Ƶ���
		}
		if (isspace(ch) && inword) //����ַ��ǿո񣬲��ұ�־����ʾ�ڵ�����
			inword = false;  //����־��Ϊ���ڵ�����
		prevCh = ch;  //�����ַ�
			
	}

	if (prevCh != '\n')
	{
		p_lines = 1;  //ͳ�Ʋ�������
		printf("The last line is incomplet line, the last character = %c\n", ch);

	}
	printf("characters = %ld, words = %d, lines = %d.\n", n_chars, n_words, n_lines);

	getch();
	return 0;
}


