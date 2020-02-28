//计算阶乘，用循环和递归两种方式
#include <stdio.h>
#include <conio.h>   //使用getch()函数
#include <ctype.h>   //用于检测和转换单个字符的函数
#include <stdbool.h> //定义了一个布尔类型，于C99中加入
#include <string.h>  //使用strlen()时用到
#define WIDTH 40

long fact(int n);
long rfact(int n);
void ShowNChar(char ch, int num);

int main(int argc, char const *argv[])
{
    int num;
    ShowNChar('*', WIDTH);
    printf("\n");
    printf("This program calculate factorials.\n");
    printf("Enter a number in the range of 0-12(q to quit):");
    while (scanf("%d", &num) == 1)
    {
        if (num < 0)
            printf("No negative numbers, please!\n");
            else if (num > 12)
                printf("Keep input under 13 please.\n");
        else
        {
            printf("Loop method: %d factorial is %ld.\n", num, fact(num));
            printf("Recursion method: %d factorial is %ld.\n", num, rfact(num));
            printf("Recursion method: %d factorial is %ld.\n", num + 1, rfact(num + 1));
        }
        printf("Enter a number in the range of 0-12(q to quit):");
    }
    printf("Bye.\n");

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

long fact(int num)
{
    long ans = 1;
    for (int i = 1; i <= num; i++)
        ans *= i;
    return ans;
}

long rfact(int num)
{
    long ans = 1;
    if (num > 0)
        ans = num * rfact(num-1);
    else
        ans = 1;
    
    return ans;
}