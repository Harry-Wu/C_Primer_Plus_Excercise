#include <stdio.h>
#include <conio.h>  //�������getch()����ͣ����̨�����ͷ�ļ�����ȥ��
int main(int argc, char const *argv[])
{
	char name[20];
	printf("Please enter your name: ");
	scanf("%s", name);
	printf("���������˫������������ʾ: \"%s\"\n", name);
	printf("���������20���ֶ���������ʾ: \"%20s\"\n", name);
	printf("���������20���ֶ��ڿ���������ʾ: \"%-20s\"\n", name);
	printf("�����ֿ�3���ַ�������ʾ: \"%*s\"\n", strlen(name)+3, name);

	getch();
	// system("PAUSE");
	return 0;
}
