# define _CRT_SECURE_NO_WARNINGS 1


////����������������-��ϰ��
////L1-002 ��ӡɳ©
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
//    scanf("%d %c", &n, &ch);//����ûע���������
//
//
//    // ��������ܴ�ӡ������ɳ©
//    for (num = 2, sum = 1; n >= sum; num++)
//    {
//        sum = 2 * num * num - 1; //��͹�ʽ��num����������������������Ϊ2*num-1��
//    }
//    num -= 2; //��Ϊ�ж���Զ�ȼ���sum�ͺ�һ��ѭ��������num��ˮ��
//
//    //��ӡ©�����ϰ벿��
//    for (i = num; i > 0; i--)
//    {
//        //��ӡ�ո�
//        for (k = 0; k < num - i; k++)
//        {
//            printf(" ");
//        }
//        //��ӡ*
//        for (j = 0; j < 2 * i - 1; j++)
//        {
//            printf("%c", ch);
//        }
//        printf("\n");
//    }
//
//    //��ӡ©�����°벿��
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
//    printf("%d\n", n - (2 * num * num - 1));//sum���ɿ���
//
//    return 0;
//}