#include <stdio.h>
#include <string.h>

int main(int __attribute__((unused)) argc, char __attribute__((unused)) *argv[])
{
    int n, n2, n3;
    n = 5;
    n2 = n*n;
    n3 = n2*n2;
    printf("n = %d, n squared = %d, n cubed = %d.\n", n, n2, n3);
    printf("Hello World!\n");
    char buffer[20];
    strcpy(buffer, "good");
    printf("The copied string is %s", buffer);
    getchar();
    return 0;
}
