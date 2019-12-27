#include <stdio.h>
#include <conio.h>
#define SIZE 26

int main(int argc, char const *argv[])
{
	// int index;
	char letters[SIZE];

	printf("Will print 26 lowercase letters: \n");
	for (int i = 0; i < SIZE; ++i)
		letters[i] = 'a' + i;

	for (int i = 0; i < SIZE; ++i)
		printf("%-3c", letters[i]);
	printf("\n");

	getch();
	return 0;
}


