//��ȡ�����������ֱ������0��������ֹ�󣬱��������ż���������ĸ�����ƽ��ֵ
#include <stdio.h>
#include <conio.h>
#include <ctype.h> //���ڼ���ת�������ַ��ĺ���
#include <stdbool.h> //������һ���������ͣ���C99�м���
// #include <string.h>  //ʹ��strlen()ʱ�õ�
#define STOP '#'  //��#�ַ���Ϊֹͣ���

int main(int argc, char const *argv[])
{
	int n;
	long sumEven = 0L;  //ż����
	int cntEven = 0;
	long sumOdd = 0L;  //������
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


