# define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int a = 1;//0x00 00 00 01
    char* p = (char*)&a;//int* ������һ���������ĸ��ֽ�
    if (*p == '1')
    {
        printf("С��\n");
    }
    else
    {
        printf("���\n");
    }

    return 0;
}