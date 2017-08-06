#include <stdio.h>
#include <math.h>
#include <string.h>
#include <limits.h>
#include <float.h>
//#include <windows.h>

#define BLURB "Authentic imitation!"

int main(int __attribute__((unused)) argc, char __attribute__((unused)) *argv[])
{
    //const double RENT;
    printf("/%2s/\n", BLURB);
    printf("/%24s/\n", BLURB);
    printf("/%24.5s/\n", BLURB);
    printf("/%-24.5s/\n", BLURB);

    getchar();
    return 0;
}

