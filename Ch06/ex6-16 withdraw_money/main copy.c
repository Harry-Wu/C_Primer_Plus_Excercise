//��10��ÿ����Ϣ2.75%��ÿ�����ȡ10�򣬶������ȡ�ꣿ
#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	double money = 10.0; //ʹ��float����Щ�����
	double rate = 0.0275;
	int year = 0;
	printf("�������ʽ�Ϊ%f��Ԫ��������%f%%��\n", money, rate*100); //���
	do
	{
		money = money * (1 + rate) - 1; //���ȡ��Ǯ���ʣ���ʽ�
		year ++;
		if (money >= 0)
			printf("��%d���ʣ���ʽ�Ϊ%f��Ԫ��\n", year, money); //���
		else  //���-1���ʣ���ʽ�С��0����ֻ��ȡʣ�������ʽ�
			printf("��%d���ȡ��ʣ�������ʽ�%f��Ԫ��\n", year, money + 1);
	} while (money > 0);
	
	//printf("��%d���ȡ��ʣ���ʽ�\n", year);


	getch();
	return 0;
}


