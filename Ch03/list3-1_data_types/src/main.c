#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include "cs50.h"


int main(int __attribute__((unused)) argc, char __attribute__((unused)) *argv[])
{
    int a;

    printf("The size of int is %u bytes.\n", sizeof(a));
    printf("The size of int is %u bytes.\n", sizeof(int));
    printf("The size of long is %u bytes.\n", sizeof(long));
    printf("The size of char is %u bytes.\n", sizeof(char));
    printf("The size of float is %#x\a bytes.\n", sizeof(float));
    printf("The size of float is %c\a bytes.\n", sizeof(float)+65);

    float b = asin(3.2);
    float c = asin(0.9);
    float d = asin(1)*180/M_PI;
    bool okFlag = true;
    printf("The value of asin(3.2) is %f\n", b);
    printf("The value of asin(0.9) is %f\n", c);
    printf("The value of degrees(0.9) is %.2fdegree\n", d);
    printf("The value of okFlag is %d\n", okFlag);

    getchar();
    return 0;
}
