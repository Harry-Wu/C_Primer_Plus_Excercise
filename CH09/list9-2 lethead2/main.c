//��ӡһ����ͷ�����ַ�������ʾ
#include <stdio.h>
#include <conio.h>   //ʹ��getch()����
#include <ctype.h>   //���ڼ���ת�������ַ��ĺ���
#include <stdbool.h> //������һ���������ͣ���C99�м���
#include <string.h>  //ʹ��strlen()ʱ�õ�
#define NAME "GIGATHINK, INC."
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40

void ShowNChar(char ch, int num);

int main(int argc, char const *argv[])
{
    ShowNChar('*', WIDTH);
    printf("\n");
    ShowNChar(' ', (WIDTH-strlen(NAME))/2);
    printf("%s\n", NAME);
    ShowNChar(' ', (WIDTH-strlen(ADDRESS))/2);
    printf("%s\n", ADDRESS);
    ShowNChar(' ', (WIDTH-strlen(PLACE))/2);
    printf("%s\n", PLACE);
    ShowNChar('*', WIDTH);
    printf("\n");
    printf("size of int is %llu.\n", sizeof(int));
    printf("size of int is %llu.\n", sizeof(long));
    printf("size of short is %llu.\n", sizeof(short));

    getch();
    return 0;
}

void ShowNChar(char ch, int num)
{
    //int count;
    for (int i = 0; i < num; i++)
    {
        putchar(ch);
    }
    //putchar('\n');
    
}