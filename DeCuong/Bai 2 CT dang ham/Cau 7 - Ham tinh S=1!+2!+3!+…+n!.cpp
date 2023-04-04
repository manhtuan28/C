#include <stdio.h>

long giaiThua(int n);
long tongGiaiThua(int n);

int main()
{
	int n;

	printf("Nhap vao so n: ");
	scanf("%d", &n);

	printf("Tong giai thua tu 1 den %d la: %ld", n, tongGiaiThua(n));

	return 0;
}

long giaiThua(int n)
{
	if (n == 0)
		return 1;
	else
		return n * giaiThua(n-1);
}

long tongGiaiThua(int n)
{
	int s = 0;

	for (int i = 1; i <= n; i++)
	{
		s += giaiThua(i);
	}

	return s;
}
