/* skip2.c ----���������ͷ�������� */
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n;
	printf("Please enter 3 integers:\n");
	scanf("%*d %*d %d", &n);  //������ĵ�3��ֵ����n
	printf("The last integer was %d\n", n);

	system("PAUSE");
	return 0;
}

