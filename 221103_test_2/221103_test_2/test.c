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
//	int i = 0;// �жϲ����Ƿ����
//	int j = 0;// δ�������Ԫ���±�
//	int tmp = 0;
//
//	for (j = 0, i = 0; j < size; j++)
//	{
//		i = j;
//		tmp = arr[j];
//		while (i)// �� i = 0 ��ʱ���˳�ѭ��
//		{
//			/*�뷨��
//			* tmp��arr[ j ]��������Ȼ���� i ����ʼ��Ϊ j��Ϊ�±���ǰ�ҡ�
//			* ������ζ�Ҫ��������һλ����Ϊarr[ j ]�����ȥ�ˣ����λ�ÿ��š�
//			* ��arr[i - 1]����������tmp������һλ���Ͳ��뵽arr[i - 1]��λ�ã���Ȼ���ظ�
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

	int i = 1;// i ��δ����ֵ����Ԫ�ص��±�
	int j = 1;// j �ǵ�ǰ�׶�Ԫ�ظ�����ÿ�׶�Ԫ�ض�����һ�׶�Ԫ����Ŀ�Ķ�����
	int k = 0;// k ��ѭ������
	int m = 0;
	int arr[1024] = { 0 };
	arr[0] = 1;

	// ���ɼ���M
	while (i < 512)
	{
		// ����������֮��������
	    for (k = 0; k < j; k++)
		{
			arr[i++] = 2 * arr[m] + 1;
			arr[i++] = 3 * arr[m++] + 1;
		}
		j *= 2;
	}

	// ����
	qsort(arr, i, sizeof(arr[0]), cmp_int);

	// ɾȥ�ظ�Ԫ��
	for (k = 1; k < i; k++)
	{
		if (arr[k] == arr[k - 1])
		{
			i = Del(arr, k, i);
		}
	}

	// ��ӡ
	for (i = 1; i < n; i++)// ��һ���Ѿ���ӡ��
	{
		printf(" %d", arr[i]);
	}

	return 0;
}


