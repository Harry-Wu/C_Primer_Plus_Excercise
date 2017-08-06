#include <stdio.h>
#include "cs50.h"


int main(int __attribute__((unused)) argc, char __attribute__((unused)) *argv[])
{

    printf("Please input your name:\n");
    char *name;
    name = get_string();
    printf("Hello %s!\n", name);
    printf("%s, please input your age:\n", name);
    int ages = get_int();
    printf("You are %d years old, that equals to about %d days!\n", ages, ages*365);
    return 0;
}
