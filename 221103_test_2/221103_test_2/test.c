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