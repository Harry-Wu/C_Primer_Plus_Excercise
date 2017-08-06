#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include "cs50.h"


int main(int __attribute__((unused)) argc, char __attribute__((unused)) *argv[])
{
    float salary;
    printf("\aEnter your desired monthly salary:\n");
    printf("$______\b\b\b\b\b\b");
    scanf("%f", &salary);
    printf("\n\t$%.2f a month is $%.2f a year.", salary,
                   salary * 12.0);
    printf("\rGee!\n");
    float c = asin(0.9);
    printf("$______\b\b\b\b\b\b%f\n", c);
    printf("The number is %x\n", 0x44); //最好加上%#x表示16进制

    getchar();
    return 0;
}
