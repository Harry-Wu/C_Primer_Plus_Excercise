//�Ƚ������������ֵ�����������н�С��ֵ
#include <stdio.h>
#include <conio.h>   //ʹ��getch()����
#include <ctype.h>   //���ڼ���ת�������ַ��ĺ���
#include <stdbool.h> //������һ���������ͣ���C99�м���
#include <string.h>  //ʹ��strlen()ʱ�õ�
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