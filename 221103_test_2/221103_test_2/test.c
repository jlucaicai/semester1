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
#include <stdlib.h>
int cmp_int(const void* e1, const void* e2)
{
	return (*(int*)e1 - *(int*)e2);
}

int Del(int arr[], int k, int i)
{
	int j = 0;
	for (j = k - 1; j < i - 1; j++)
	{
		arr[j] = arr[j + 1];
	}
	
	return --i;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("1");

	int i = 1;// i 是未被赋值的首元素的下标
	int j = 1;// j 是当前阶段元素个数（每阶段元素都是下一阶段元素数目的二倍）
	int k = 0;// k 是循环变量
	int m = 0;
	int arr[1024] = { 0 };
	arr[0] = 1;

	// 生成集合M
	while (i < 512)
	{
		// 先整出来，之后再排序
	    for (k = 0; k < j; k++)
		{
			arr[i++] = 2 * arr[m] + 1;
			arr[i++] = 3 * arr[m++] + 1;
		}
		j *= 2;
	}

	// 排序
	qsort(arr, i, sizeof(arr[0]), cmp_int);

	// 删去重复元素
	for (k = 1; k < i; k++)
	{
		if (arr[k] == arr[k - 1])
		{
			i = Del(arr, k, i);
		}
	}

	// 打印
	for (i = 1; i < n; i++)// 第一个已经打印了
	{
		printf(" %d", arr[i]);
	}

	return 0;
}


