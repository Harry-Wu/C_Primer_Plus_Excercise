//����һ���������ĺ���������main�����е���
#include <stdio.h>
#include <conio.h>  //�������getch()����ͣ����̨�����ͷ�ļ�����ȥ��

void pound(int n);  //��������

int main(int argc, char const *argv[])
{
	int times = 5;
	char ch = '!';
	float f = 6.0;
	pound(times);
	pound(ch);
	pound(f);

	getch();
	// system("PAUSE");
	return 0;
}

//��������Ĳ�����ӡ��Ӧ������#��
void pound(int n)
{
	printf("%d '#' will be printed.\n", n);
	while (n-- > 0)
		printf("#");
	printf("\n");
}
