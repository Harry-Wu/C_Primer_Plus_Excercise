#include <stdio.h>
#include <conio.h>

const int timeConvBase = 60;
int main(int argc, char const *argv[])
{
    int totalMinutes, hour, minutes;
    printf("��������Ҫת���ķ�����������q�˳�����");
    while (scanf("%d", &totalMinutes))  //�������������ʱ
    {
        if (totalMinutes > 0)
        { 
            hour = totalMinutes / timeConvBase;
            minutes = totalMinutes % timeConvBase;
            printf("%d���� = %dСʱ��%d���ӡ�\n", totalMinutes, hour, minutes);
            printf("Next input: ");
            
        }
        else
        {
            printf("���������0��ֵ��");
        }
    }
    printf("����ת����\n");

    getch();
    return 0;
}