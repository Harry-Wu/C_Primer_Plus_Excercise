#include <stdio.h>

int main(int __attribute__((unused)) argc, char __attribute__((unused)) *argv[])
{
    unsigned width, precision;
    int number = 256;
    double weight = 242.5;

    printf("What field width?\n");
    scanf("%d", &width);
    printf("The number is:%*d: \n", width, number);
    printf("Now enter a width and precision: \n");
    scanf("%d %d", &width, &precision);
    printf("Weight = %*.*f\n", width, precision, weight);
    return 0;
}
