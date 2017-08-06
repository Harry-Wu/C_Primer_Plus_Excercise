#include <stdio.h>
#include "cs50.h"

void two();

void one_three()
{
    printf("One\n");
    printf("One\n");
    two();
    printf("Three\n");
}

void two()
{
    printf("Two\n");
}

int main(int __attribute__((unused)) argc, char __attribute__((unused)) *argv[])
{

    one_three();
    printf("Done!\n");
    getchar();
    return 0;
}
