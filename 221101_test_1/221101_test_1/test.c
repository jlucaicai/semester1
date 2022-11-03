# define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//int main()
//{
//	int nums[10] = { 0 };
//	int numsSize = 0;
//	//解法一：累加求和
//	// 
//	////int n = numsSize - 1;// 本来需要减去 1 的，但是数组本身少了一个，所以不用减
//	//int n = numsSize;
//	//int sum = n * (n + 1) / 2;
//	//for (int i = 0; i < numsSize; i++)
//	//{
//	//	sum -= nums[i];
//	//}
//    //return sum;
//	
//	//解法二：异或
//	//
//	int x = 0;
//	int i = 0;
//
//	for (i = 0; i < numsSize; i++)
//	{
//		x ^= nums[i];
//	}
//
//	for (i = 0; i < numsSize + 1; i++)
//	{
//		x ^= i;
//	}
//
//	return x;
//}
// 
//#include <stdio.h>
//int main()
//{
//	int nums[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//    int numsSize = 10;
//    int i = 0;
//    for (i = 0; i < numsSize; i++)
//    {
//        //printf("%d", nums[(i + 3) % numsSize]);// 这还是向左移位
//        printf("%d", nums[(i +numsSize - 3) % numsSize]);
//    }
//}

//void reserve(int* nums, int beg, int end)
//{
//    while (beg < end)
//    {
//        int temp = nums[beg];
//        nums[beg] = nums[end];
//        nums[end] = temp;
//        beg++;
//        end--;
//    }
//}
//
//void rotate(int* nums, int numsSize, int k) {
//
//    k %= numsSize;//没有考虑k超过数组大小的情况
//    reserve(nums, 0, numsSize - 1);
//    reserve(nums, 0, k - 1);
//    reserve(nums, k, numsSize - 1);
//
//}

//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	//for (int i = 10; i > 0; i--)//数组越界!
//	for (int i = 9; i >= 0; i--)
//	{
//		if (i == 9)
//			printf("%d", arr[i]);
//		else
//			printf(" %d", arr[i]);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	long long n = 0;
//	int num = 0;
//	long long m = 0;
//	long long reserve = 0;
//    scanf("%lld", &n);
//	m = n;
//
//	while (n)
//	{
//		num = n % 10;
//		n /= 10;
//		reserve = reserve * 10 + num;
//	}
//	
//	if (reserve == m)
//	{
//		printf("YES");
//	}
//	else
//		printf("NO");
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int num = 0;
//    int sum1 = 0;
//    int sum2 = 0;
//    int sum3 = 0;
//    int score[50][3] = { 0 };
//    scanf("%d", &num);
//
//    for (int i = 0; i < num; i++)
//    {
//        for (int j = 0; j < 3; j++)
//        {
//            scanf("%d", &score[i][j]);
//        }
//    }
//
//    for (int i = 0; i < num; i++)
//    {
//        sum1 += score[i][0];
//    }
//    for (int i = 0; i < num; i++)
//    {
//        sum2 += score[i][1];
//    } 
//    for (int i = 0; i < num; i++)
//    {
//        sum3 += score[i][2];
//    }
//
//    printf("%d", sum1);
//    printf(" %d", sum2);
//    printf(" %d\n", sum3);
//    printf("%d", sum1 / num);
//    printf(" %d", sum2 / num);
//    printf(" %d", sum3 / num);
//
//    return 0;
//}

//#include <stdio.h>
//void swap(int* a, int* b)
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//int main()
//{
//	int A[5] = { 0 };
//	int B[5] = { 0, 1, 2, 3, 4 };
//	int C[5] = { 0 };
//
//	for (int i = 0; i < 5; i++)
//	{
//		scanf("%d", &A[i]);
//		C[i] = A[i];
//	}
//
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 4 - i; j++)
//		{
//			if (A[j] > A[j + 1])
//			{
//				swap(&A[j], &A[j + 1]);
//				swap(&B[j], &B[j + 1]);
//			}
//		}
//	}
//
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d", C[i]);
//	}
//	printf("\n");
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d", B[i]);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	int max = 0;
//	int arr[50] = { 0 };
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", arr[i]);
//		if (arr[i] > max)
//		{
//			arr[i] = max;
//		}
//	}
//	//
//	//for (i = 0; i < n; i++)
//	//gcd(arr1[i], arr1[(i + 1) % n]);
//	j = max;
//	while (1)
//	{
//		for (i = 0; i < n; i++)
//		{
//			if (j % arr[i] == 0)
//			{
//				count++;
//			}
//		}
//		if (count == n)
//	    {
//		     printf("%d", j);
//			 break;
//	    }
//	    else
//		     j++;
//	}
//	
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
////求n个数字的最小公倍数
////循环地用每个数字去除以每个目标数，如果都能整除的话，break输出最小公倍数
//
//int main()
//{
//    int n;
//    while (~scanf("%d", &n))
//    {
//        int num[100];
//        int Max = 0;
//
//        for (int i = 0; i < n; i++)
//        {
//            scanf("%d", &num[i]);
//            Max = num[i] > Max ? num[i] : Max;     //目的是以最大数开始遍历，而不从1开始
//        }
//
//        while (1)                                //代表无限循环，里面必须有break
//        {
//            for (int i = 0; i < n; i++)
//            {
//                if (Max % num[i] != 0)              //当然Max也可以从1开始遍历
//                    goto stop;                    //但凡有一个不能整除，直接跳出
//            }
//
//            printf("%d\n", Max);
//            break;                               //出现第一个公倍数时输出并跳出while
//
//        stop:                                //无法整数的跳出点
//            Max++;
//
//        }
//    }
//
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//    int n = 0;
//    int count = 0;
//    scanf("%d", &n);
//    int num[100] = { 0 };
//    int max = 0;
//
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &num[i]);
//        max = num[i] > max ? num[i] : max;     
//    }
//
//        while (1)                                //死循环，必须有break
//        {
//            for (int i = 0; i < n; i++)
//            {
//                if (max % num[i] == 0)              
//                    count++;
//                else
//                    break;
//            }
//            if (count == n)
//            {
//                printf("%d\n", max);
//                break;                               
//            }
//            else
//            {
//                count = 0;
//                max++;
//            }
//        }
//    return 0;
//}

//#include<stdio.h>
//void selection_sort(int arr[10]);
//void bubble_sort(int arr[10]);
//void insert_sort(int arr[10]);
//void subsequence_sort(int arr[10]);
//int main() {
//	int a[10] = { 0,0,0,0,0,0,0,0,0,0 };
//	int b[10] = { 0,0,0,0,0,0,0,0,0,0 };
//	int c[10] = { 0,0,0,0,0,0,0,0,0,0 };
//	for (int n = 0; n < 10; n++) {
//		scanf("%d", &a[n]);
//		c[n] = b[n] = a[n];
//	}
//	selection_sort(a);
//	printf(" ");
//	bubble_sort(b);
//	printf(" ");
//	subsequence_sort(c);
//}
//void selection_sort(int arr[10]) {
//	int lenght, minindex, temp, i, j;
//	int comparison_times = 0, move_times = 0;
//	//lenght = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < 10 - 1; i++) {
//		minindex = i;
//		for (j = i + 1; j < 10; j++) {
//			if (arr[j] < arr[i])minindex = j;
//			comparison_times++;
//		}
//		temp = arr[i];
//		arr[i] = arr[minindex];
//		arr[minindex] = temp;
//		move_times++;
//	}
//	printf("%d %d", comparison_times, move_times);
//	//for (i = 0; i < 10; i++)printf("%d", arr[i]);
//}
//void bubble_sort(int arr[10]) {
//	int lenght, temp, i, j;
//	int comparison_times = 0, move_times = 0;
//	//lenght = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < 10 - 1; i++) {
//		int  flag = 0;
//		for (j = 0; j < 10 - 1 - i; j++) {
//			if (arr[j] > arr[j + 1]) {
//				temp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = temp;
//				move_times++;
//				flag = 1;
//			}
//			//comparison_times++;
//		}
//		if (!flag)
//			break;
//	}
//	comparison_times = (i + 1) * 9;
//	printf("%d %d", comparison_times, move_times);
//	//for (i = 0; i < 10; i++)printf("%d", arr[i]);
//}
//void insert_sort(int arr[10]) {
//	int lenght, temp, i, j;
//	int comparison_times = 0, move_times = 0;
//	int preindex;
//	for (i = 1; i < 10; i++) {
//		preindex = i - 1;
//		temp = arr[i];
//		while (preindex >= 0 && arr[preindex] > temp) {
//			comparison_times++;
//			arr[preindex + 1] = arr[preindex];
//			preindex--;
//		}
//		arr[preindex + 1] = temp;
//		move_times++;
//	}
//	printf("%d %d", comparison_times, move_times);
//	//for (i = 0; i < 10; i++)printf("%d", arr[i]);
//}
//void subsequence_sort(int arr[10]) {
//	int lenght, temp, i, j;
//	int comparison_times = 0, move_times = 0;
//	int preindex;
//	int flag;
//	for (i = 1; i < 10; i++) {
//		preindex = i - 1;
//		flag = 1;
//		temp = arr[i];
//		while (preindex >= 0 && arr[preindex] > temp) {
//			comparison_times++;
//			arr[preindex + 1] = arr[preindex];
//			preindex--;
//		}
//		for (j = i - 1; j >= preindex + 1; j--)
//		{
//			arr[j + 1] = arr[j];
//			if (flag)
//			{
//				move_times += i - preindex;
//				flag = 0;
//			}
//		}
//		arr[preindex + 1] = temp;
//		//move_times++;
//	}
//	printf("%d %d", comparison_times + 9, move_times);
//	//for (i = 0; i < 10; i++)printf("%d", arr[i]);
//}
//
//#include<stdio.h>
//
//int zy1 = 0, zy2 = 0, mp1 = 0, mp2 = 0, cr1 = 0, cr2 = 0;
//
//void zy(int b[10]) {
//
//	int i, j, k, r;
//
//	for (i = 0; i < 9; i++) {
//
//		j = i; zy2++;
//
//		for (k = i + 1; k < 10; k++) {
//
//			zy1++;
//
//			if (b[k] < b[j])
//
//				j = k;
//
//			r = b[i];
//
//			b[i] = b[j];
//
//			b[j] = r;
//
//		}
//
//	}
//
//
//
//}
//
//void mp(int b[10]) {
//
//	int i, r, flag = 1;
//
//	while (flag) {
//
//		flag = 0;
//
//		for (i = 0; i < 9; i++) {
//
//			mp1++;
//
//			if (b[i] > b[i + 1]) {
//
//				mp2++;
//
//				r = b[i]; b[i] = b[i + 1]; b[i + 1] = r;
//
//				flag = 1;
//
//			}
//
//		}
//
//	}
//
//}
//
//void cr(int b[10]) {
//
//	int i, j, k, r, flag;
//
//	for (i = 1; i < 10; i++) {
//
//		cr1++;
//
//		flag = 0;
//
//		j = i - 1;
//
//		while ((b[j] > b[i]) && (j >= 0)) {
//
//			j--;
//
//			flag = 1;
//
//			cr1++;
//
//		}
//
//		r = b[i];
//
//		for (k = i - 1; k >= j + 1; k--) {
//
//			b[k + 1] = b[k];
//
//			if (flag)cr2++;
//
//		}
//
//		if (flag)cr2++;
//
//		b[j + 1] = r;
//
//	}
//
//}
//
//int main() {
//
//	int a[10], b[10], c[10];
//
//	for (int s = 0; s < 10; s++) {
//
//		scanf("%d", &a[s]);
//
//		b[s] = a[s]; c[s] = a[s];
//
//	}
//
//	zy(a); mp(b); cr(c);
//
//	printf("%d %d %d %d %d %d", zy1, zy2, mp1, mp2, cr1, cr2);
//
//}
