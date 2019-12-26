#include <stdio.h>
#include <conio.h>

const int timeConvBase = 60;
int main(int argc, char const *argv[])
{
    int totalMinutes, hour, minutes;
    printf("请输入你要转换的分钟数（输入q退出）：");
    while (scanf("%d", &totalMinutes))  //当输入的是整数时
    {
        if (totalMinutes > 0)
        { 
            hour = totalMinutes / timeConvBase;
            minutes = totalMinutes % timeConvBase;
            printf("%d分钟 = %d小时，%d分钟。\n", totalMinutes, hour, minutes);
            printf("Next input: ");
            
        }
        else
        {
            printf("请输入大于0的值：");
        }
    }
    printf("结束转换。\n");

    getch();
    return 0;
}