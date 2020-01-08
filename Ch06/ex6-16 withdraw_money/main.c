//存100万，每年利息8%，每年年底取10万，多少年后取完？
#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	double money = 100.0; //使用float会有些许误差
	double rate = 0.08;
	int year = 0;
	printf("年初存款资金为%f万元，年利率%f%%。\n", money, rate*100); //如果
	do
	{
		money = money * (1 + rate) - 10; //年底取完钱后的剩余资金
		year ++;
		if (money >= 0)
			printf("第%d年底剩余资金为%f万元。\n", year, money); //如果
		else  //如果-10万后剩余资金小于0，则只能取剩下所有资金
			printf("第%d年底取完剩余所有资金%f万元。\n", year, money + 10);
	} while (money > 0);
	
	//printf("第%d年底取完剩余资金。\n", year);


	getch();
	return 0;
}


