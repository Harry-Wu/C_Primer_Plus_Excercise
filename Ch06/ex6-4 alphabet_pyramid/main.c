//�����������ĸ��ӡ������ĸ��ͷ�Ľ�����
#include <stdio.h>
#include <conio.h>
#define SIZE 26

int main(int argc, char const *argv[])
{
	char letter;
	int count;
	printf("Please input an uppercase letter(input other character to quit): ");
	scanf("%c", &letter);
	while (letter >= 'A' && letter <= 'Z')
	{
		count = 'Z' - letter;
		for (int i = 0; i <= count; ++i) //���д�ӡ
		{
			for (int j = 0; j < count - i; j++) //ÿһ��Ҫ��ӡ�Ŀո��ַ�
			{
				printf("  ");
			}
			for (int k = 0; k < i + 1; k++)
			{
				printf("%-2c", letter + k);
			}
			for (int k = i - 1; k >= 0; k--)
			{
				printf("%-2c", letter + k);
			}
			printf("\n");
		}
		printf("Please input NEXT uppercase letter(input other character to quit): ");
		fflush(stdin); //����ԭ�����ƪ���£�https://www.cnblogs.com/VIPler/p/6906434.html

		scanf("%c", &letter);
	}
	printf("���볬��Χ��ת��������\n");


	getch();
	return 0;
}


