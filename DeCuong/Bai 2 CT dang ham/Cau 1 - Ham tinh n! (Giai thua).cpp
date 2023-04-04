#include <stdio.h>

long giaithua(int n);

int main()
{
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);

	printf("N! = %ld", giaithua(n));

	return 0;
}

long giaithua(int n)
{
	long s = 1;
	for (int i = 1; i <= n; i++)
	{
		s *= i;
	}
	return s;
}
