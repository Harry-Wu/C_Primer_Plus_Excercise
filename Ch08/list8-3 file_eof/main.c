//���ļ��������ļ������ݴ�ӡ����Ļ�ϡ��ã�����ÿһ����ţ���ԭ���ģ������������棬��󱨸�����˶��ٴ��滻��
//ֱ������main.exe�����������ļ������ǵ�debugʱ��ʹʹ�þ���·��ȴ��Ȼ���У���֪��ô����
#include <stdio.h>
#include <stdlib.h>  //Ϊ��ʹ��exit()
#include <conio.h>  //ʹ��getch()����
#include <ctype.h> //���ڼ���ת�������ַ��ĺ���
#include <stdbool.h> //������һ���������ͣ���C99�м���
// #include <string.h>  //ʹ��strlen()ʱ�õ�
#define STOP '#'  //��#�ַ���Ϊֹͣ���

int main(int argc, char const *argv[])
{
	int ch;
	FILE *fp;
	char fname[200];  //����ļ���

	
	printf("Enter the name of the file:");
	//scanf("%s", fname);  //�����ļ�����·�������пո�ʱ������ַ����ᱻ����
	//fgets(fname, sizeof(fname), stdin);  //�˺������Ի�ȡ���ո�������ַ��������ַ���ĩβ��\n�����ǽ�����\0
	//fname[strcspn(fname, "\n")] = '\0';  //����ͨ�����д��뽫ĩβ��\n����\0
	gets(fname);
	printf("File name is %s\n", fname);
	fp = fopen(fname, "r"); //ֻ����ʽ���ļ�
	if (fp == NULL)
	{
		printf("Failed to open file. Bye.\n");
		//exit(1);  //��ֹ����
	}
	// getc(fp) -- �����ǴӴ򿪵��ļ��л�ȡһ���ַ�
	while ((ch = getc(fp)) != EOF)  //��windowsϵͳ����һ�����п�ͷ���밴Ctrl+Z��ģ��EOF
	{
		if (ch == '.')
			printf("!"); 
		else if (ch == '!')
			printf("!!"); 
		else printf("%c", ch);
	}
	fclose(fp);  //�ر��ļ�
	
	getch();
	return 0;
}


