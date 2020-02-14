//读取输入的整数，直到输入0。输入终止后，报告输入的偶数和奇数的个数和平均值
#include <stdio.h>
#include <conio.h>
#include <ctype.h> //用于检测和转换单个字符的函数
#include <stdbool.h> //定义了一个布尔类型，于C99中加入
// #include <string.h>  //使用strlen()时用到
#define STOP '#'  //以#字符作为停止标记

int main(int argc, char const *argv[])
{
	int n;
	long sumEven = 0L;  //偶数和
	int cntEven = 0;
	long sumOdd = 0L;  //奇数和
	int cntOdd = 0;
	
	printf("Enter int to count, enter 0 to terminate:\n");
	while (scanf("%d", &n) == 1 && n != 0)
	{
		if (n % 2 == 1)
		{
			sumOdd += n;
			cntOdd++;
		}
		else
		{
			sumEven += n;
			cntEven++;
		}
		
		
	}
	if (cntEven == 0)
		printf("No even number input.\n");
	else
		printf("sumEven = %ld, cntEven = %d, average even = %f.\n", sumEven, cntEven, (float)sumEven/cntEven);
	if (cntOdd == 0)
		printf("No odd number input.\n");
	else
		printf("sumOdd = %ld, cntOdd = %d, average odd = %f.\n", sumOdd, cntOdd, (float)sumOdd / cntOdd);

	getch();
	return 0;
}


