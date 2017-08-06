#include <stdio.h>

int main(int __attribute__((unused)) argc, char __attribute__((unused)) *argv[])
{
    int ascii;
    float temp;

    printf("Enter an ASCII code£¨int£©: ");
    scanf("%d", &ascii);
    printf("%d is the ASCII code for %c.\n", ascii, ascii);

    printf("Enter an float value: ");
    scanf("%f", &temp);
    printf("The input is %f or %e.\n", temp, temp);

    getchar();
    return 0;
}

