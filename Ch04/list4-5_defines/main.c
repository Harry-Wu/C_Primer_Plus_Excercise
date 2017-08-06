#include <stdio.h>
#include <math.h>
#include <string.h>
#include <limits.h>
#include <float.h>
//#include <windows.h>

#define DENSITY 62.4  //人的密度，英镑/立方英尺

#define kg2pounds 2.2046  //pounds = 2.2046*kg

int main(int __attribute__((unused)) argc, char __attribute__((unused)) *argv[])
{
    printf("Some number limits for this system:\n");
    printf("Biggest int: %d\n", INT_MAX);
    printf("The mininum unsigned long: %lld\n", LONG_LONG_MIN);
    printf("One byte = %d bits in this system.\n", CHAR_BIT);

    getchar();
    return 0;
}

