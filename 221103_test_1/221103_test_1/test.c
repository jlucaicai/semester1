# define _CRT_SECURE_NO_WARNINGS 1


////团体程序设计天梯赛-练习集
////L1-002 打印沙漏
//
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    char ch = 0;
//    int sum = 0;
//    int num = 0;
//    int i = 0;
//    int j = 0;
//    int k = 0;
//    scanf("%d %c", &n, &ch);//唉，没注意给定符号
//
//
//    // 计算最多能打印多少行沙漏
//    for (num = 2, sum = 1; n >= sum; num++)
//    {
//        sum = 2 * num * num - 1; //求和公式，num代表上三角行数（总行数为2*num-1）
//    }
//    num -= 2; //因为判断永远比计算sum滞后一个循环，所以num有水分
//
//    //打印漏斗的上半部分
//    for (i = num; i > 0; i--)
//    {
//        //打印空格
//        for (k = 0; k < num - i; k++)
//        {
//            printf(" ");
//        }
//        //打印*
//        for (j = 0; j < 2 * i - 1; j++)
//        {
//            printf("%c", ch);
//        }
//        printf("\n");
//    }
//
//    //打印漏斗的下半部分
//    for (i = 2; i <= num; i++)
//    {
//        for (k = 0; k < num - i; k++)
//        {
//            printf(" ");
//        }
//        for (j = 0; j < 2 * i - 1; j++)
//        {
//            printf("%c", ch);
//        }
//        printf("\n");
//    }
//
//    printf("%d\n", n - (2 * num * num - 1));//sum不可靠！
//
//    return 0;
//}