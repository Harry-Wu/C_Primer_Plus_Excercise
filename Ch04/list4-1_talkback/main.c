#include <stdio.h>
//#include <stdio_s.h>
//#include <math.h>
#include <string.h>
//#include <windows.h>

//#define __STDC_WANT_LIB_EXT1__ 1

#define DENSITY 62.4  //�˵��ܶȣ�Ӣ��/����Ӣ��

#define kg2pounds 2.2046  //pounds = 2.2046*kg

int main(int __attribute__((unused)) argc, char __attribute__((unused)) *argv[])
{
    float weight, volume;
    int size, letters;
    char name[40];  //�洢�ַ���

    printf("Hi, what's your 1st name?\n");
    scanf("%s", name);
    //scanf_s("%s", name, 20);

    size = sizeof(name);
    letters = strlen(name);  //��������������ж����ֽ�, strlen�ǻ�ȡ������������ֽڳ���
    printf("%s, what's your weight in kg?\n", name);
    scanf("%f", &weight);
    volume = weight * kg2pounds / DENSITY;
    printf("Well, %s, your volume is %2.2f cubic feet.\n", name, volume);
    printf("Also, your 1st name has %d letters, and we have %d bytes to store it in.\n", letters, size);

    getchar();
    return 0;
}

