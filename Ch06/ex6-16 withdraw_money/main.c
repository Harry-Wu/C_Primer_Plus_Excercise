//��100��ÿ����Ϣ8%��ÿ�����ȡ10�򣬶������ȡ�ꣿ
#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	double money = 100.0; //ʹ��float����Щ�����
	double rate = 0.08;
	int year = 0;
	printf("�������ʽ�Ϊ%f��Ԫ��������%f%%��\n", money, rate*100); //���
	do
	{
		money = money * (1 + rate) - 10; //���ȡ��Ǯ���ʣ���ʽ�
		year ++;
		if (money >= 0)
			printf("��%d���ʣ���ʽ�Ϊ%f��Ԫ��\n", year, money); //���
		else  //���-10���ʣ���ʽ�С��0����ֻ��ȡʣ�������ʽ�
			printf("��%d���ȡ��ʣ�������ʽ�%f��Ԫ��\n", year, money + 10);
	} while (money > 0);
	
	//printf("��%d���ȡ��ʣ���ʽ�\n", year);


	getch();
	return 0;
}


