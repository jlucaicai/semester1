# define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int a = 1;//0x00 00 00 01
    char* p = (char*)&a;//int* 解引用一口气访问四个字节
    if (*p == '1')
    {
        printf("小端\n");
    }
    else
    {
        printf("大端\n");
    }

    return 0;
}