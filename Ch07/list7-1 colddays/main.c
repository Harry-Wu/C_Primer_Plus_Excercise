//����0�����µ������İٷֱ�
#include <stdio.h>
#include <conio.h>
// #include <string.h>  //ʹ��strlen()ʱ�õ�

int main(int argc, char const *argv[])
{
	const int FREEZING = 0;
	int allDays = 0;
	int coldDays = 0;
	float temperature;
	printf("Enter the list of daily temperature in celsius, enter q to quit.\n"); 
	while (scanf("%f", &temperature))  //��û�ж�ȡ��������ʱ������ѭ��
	{		
		allDays++;
		if (temperature < FREEZING)
			coldDays++;
		
	}
	if (allDays != 0)
		printf("%d days total; %.1f%% days were below freezing.\n", allDays, 100.0 * (float)coldDays / allDays);
	else printf("No data entered!\n");


	getch();
	return 0;
}


