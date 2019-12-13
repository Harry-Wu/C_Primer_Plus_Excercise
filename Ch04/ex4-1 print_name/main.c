#include <stdio.h>
int main(int argc, char const *argv[])
{
	char firstName[30], lastName[30];
	printf("Please enter your first name: ");
	scanf("%s", firstName);  
	printf("Please enter your last name: ");
	scanf("%s", lastName);  
	printf("Your full name is %s %s.\n", firstName, lastName);

	system("PAUSE");
	return 0;
}
