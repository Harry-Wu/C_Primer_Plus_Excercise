/* skip2.c ----跳过输入的头两个整数 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n;
	printf("Please enter 3 integers:\n");
	scanf("%*d %*d %d", &n);  //将输入的第3个值赋于n
	printf("The last integer was %d\n", n);

	system("PAUSE");
	return 0;
}

