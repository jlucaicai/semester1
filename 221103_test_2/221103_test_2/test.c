# define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
//void swap(int* a, int* b)
//{
//	int tmp = 0;
//	tmp = *a;
//	*a = *b;
//	*b = tmp;
//	count_swap++;
//}
//
//void insert_sort(int arr[], int size)
//{
//	int i = 0;// 判断插入是否结束
//	int j = 0;// 未排序的首元素下标
//	int tmp = 0;
//
//	for (j = 0, i = 0; j < size; j++)
//	{
//		i = j;
//		tmp = arr[j];
//		while (i)// 当 i = 0 的时候退出循环
//		{
//			/*想法：
//			* tmp把arr[ j ]存起来，然后以 i （初始化为 j）为下标向前找。
//			* 无论如何都要先往后移一位，因为arr[ j ]被提出去了，这个位置空着。
//			* 讲arr[i - 1]填过来，如果tmp大于下一位，就插入到arr[i - 1]的位置，不然就重复
//			*/
//			arr[i] = arr[i - 1];
//			if (tmp > arr[i - 1])
//			{
//				arr[i - 1] = tmp;
//				break;
//			}
//			i--;
//		}
//		if (!i)
//		{
//			arr[0] = tmp;
//		}
//	}
//}
//
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	insert_sort(arr, 10);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//}


#include <stdio.h>
int main()
{
	printf("1");
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int j = 2;
	int k = 0;
	int tmp = 0;
	int arr[700] = { 0 };
	arr[0] = 1;

	while (i < 700)
	{
		tmp = i;
		for (k = 0; k < j / 2; k++)
		{
			arr[i++] = 2 * arr[tmp] + 1;
		}
		for (; k < j; k++)
		{
			arr[i++] = 3 * arr[tmp] + 1;
		}
		j *= 2;
	}

	
	for (i = 1; i < n; i++)
	{
		printf(" %d", arr[i]);
	}

	return 0;
}