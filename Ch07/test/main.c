//ͳ����������ֵ��ַ���������������������
#include <stdio.h>
#include <conio.h>
#include <ctype.h> //���ڼ���ת�������ַ��ĺ���
#include <stdbool.h> //������һ���������ͣ���C99�м���
// #include <string.h>  //ʹ��strlen()ʱ�õ�
#define STOP '|'  //��|�ַ���Ϊֹͣ���

int main(int argc, char const *argv[])
{
	
	bool bl = 100 > 3 && 'a' > 'c';  //�жϱ��ʽ���
	printf("The value of expression is %d.\n", bl); 
	bl = 100 > 3 || 'a' > 'c';  //�жϱ��ʽ���
	printf("The value of above expression is %d.\n", bl); 
	
	getch();
	return 0;
}


