# define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int main()
{
	int n = 0;
	int s = 0;
	int m = 0;
	int i = 0;
	int k = 0;
	int hum[1000] = 0;

	scanf("%d %d %d", &n, &s, &m);

	for (i = 1; i <= n; i++)
	{
		hum[i] = i;
	}

	while (1 != n)
	{
		printf("%d ", hum[(s-1) + (m-1)]);
		n--;
	}
	printf("%d\n");

	return 0;
}