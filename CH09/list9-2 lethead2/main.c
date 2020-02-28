//打印一个信头，让字符居中显示
#include <stdio.h>
#include <conio.h>   //使用getch()函数
#include <ctype.h>   //用于检测和转换单个字符的函数
#include <stdbool.h> //定义了一个布尔类型，于C99中加入
#include <string.h>  //使用strlen()时用到
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