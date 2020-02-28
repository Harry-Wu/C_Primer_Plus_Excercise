//使用地址运算符获得不同函数中具有相同名称的变量的存储地址
#include <stdio.h>
#include <conio.h>   //使用getch()函数
#include <ctype.h>   //用于检测和转换单个字符的函数
#include <stdbool.h> //定义了一个布尔类型，于C99中加入
#include <string.h>  //使用strlen()时用到
// #define WIDTH 40

//long fact(int n);
//long rfact(int n);
void ShowAddr(int bah);

int main(int argc, char const *argv[])
{
    int pooh = 2, bah = 5;  //main()中的局部变量
    float num[2] = {1.1, 2.2};
    char ch[2] = {1, 2};
    printf("In main(), pooh=%d and &pooh=%p.\n", pooh, &pooh);
    printf("In main(), bah=%d and &bah=%p.\n", bah, &bah);
    printf("In main(), num[0]=%f and &num=%p.\n", num[0], &num);
    //num是数组首元素地址0x200007a4;
    //num + 1为数组元素地址后移一个float型的偏移量，即0x200007a4 + 4 
    printf("In main(), num[1]=%f and num+1=%p.\n", num[1], num + 1);
    printf("In main(), num[1]=%f and &num[1]=%p.\n", num[1], &num[1]);
    printf("sizeof(float)=%llu.\n", sizeof(float));

    printf("In main(), ch[0]=%d and &ch=%p.\n", ch[0], &ch);
    //ch是数组首元素地址0x200007a4;
    //ch + 1为数组元素地址后移一个char型的偏移量，即0x200007a4 + 1
    printf("In main(), ch[1]=%d and ch+1=%p.\n", ch[1], ch + 1);
    printf("In main(), ch[1]=%d and &ch[1]=%p.\n", ch[1], &ch[1]);

    ShowAddr(pooh);
    
    printf("Bye.\n");

    getch();
    return 0;
}

void ShowAddr(int bah)
{
    int pooh = 10;
    printf("In ShowAddr(), pooh=%d and &pooh=%p.\n", pooh, &pooh);
    printf("In ShowAddr(), bah=%d and &bah=%p.\n", bah, &bah);

    
}

long fact(int num)
{
    long ans = 1;
    for (int i = 1; i <= num; i++)
        ans *= i;
    return ans;
}

long rfact(int num)
{
    long ans = 1;
    if (num > 0)
        ans = num * rfact(num-1);
    else
        ans = 1;
    
    return ans;
}