#include <stdio.h>
#include <conio.h>

const timeConvBase = 60;
int main(int argc, char const *argv[])
{
    char ch1 = 'A';
    char ch = ch1;
    printf("ASCII number of A is %d\n", 'A');
    printf("ASCII number of a is %d\n", 'a');
    while (ch < 'A' + ALPHABET)
    {
        printf("%2c ", ch);
        ch++;
    }
    printf("\n");
    ch = ch1;
    while (ch < 'A' + ALPHABET)
    {
        printf("%2c ", ch + 'a' - 'A');
        ch++;
    }

    getch();
    return 0;
}