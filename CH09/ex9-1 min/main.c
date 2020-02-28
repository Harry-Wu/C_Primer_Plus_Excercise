//比较输入的两个数值，并返回其中较小的值
#include <stdio.h>
#include <conio.h>   //使用getch()函数
#include <ctype.h>   //用于检测和转换单个字符的函数
#include <stdbool.h> //定义了一个布尔类型，于C99中加入
#include <string.h>  //使用strlen()时用到
// #define WIDTH 40

//long fact(int n);
//long rfact(int n);
double Min(double a, double b);

int main(int argc, char const *argv[])
{
    double x, y;
    printf("Please input two numbers(q to quit):");
    while (scanf("%lf %lf", &x, &y)==2)
    {
        printf("The min number between %lf and %lf is %lf.\n", x, y, Min(x,y));
        printf("Please input another two numbers(q to quit):");

    }
    
    printf("Bye.\n");

    getch();
    return 0;
}

double Min(double a, double b)
{
    return a<b ? a : b;
}