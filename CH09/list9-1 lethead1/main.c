//��ӡһ����ͷ
#include <stdio.h>
#include <conio.h>   //ʹ��getch()����
#include <ctype.h>   //���ڼ���ת�������ַ��ĺ���
#include <stdbool.h> //������һ���������ͣ���C99�м���
#define NAME "GIGATHINK, INC."
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40

void StarBar(void);

int main(int argc, char const *argv[])
{
    StarBar();
    printf("%s\n", NAME);
    printf("%s\n", ADDRESS);
    printf("%s\n", PLACE);
    printf("size of int is %d.\n", sizeof(int));
    printf("size of int is %d.\n", sizeof(long));
    printf("size of short is %d.\n", sizeof(short));
    StarBar();

    getch();
    return 0;
}

void StarBar(void)
{
    //int count;
    for (int i = 0; i < WIDTH; i++)
    {
        putchar('*');
    }
    putchar('\n');
    
}