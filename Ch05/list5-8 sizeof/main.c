//sizeof�������ʹ��
#include <stdio.h>
#include <conio.h>  //�������getch()����ͣ����̨�����ͷ�ļ�����ȥ��
int main(int argc, char const *argv[])
{
	int n = 0;
	size_t intSize;
	intSize = sizeof(int);
	printf("n = %d, n has %lu bytes; all ints have %lu bytes.\n", n, sizeof n, intSize);

	getch();
	// system("PAUSE");
	return 0;
}
