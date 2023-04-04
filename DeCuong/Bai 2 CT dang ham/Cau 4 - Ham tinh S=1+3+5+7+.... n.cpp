#include <stdio.h>

int tong_so_le (int n);

int main()
{
	int n;
	printf("Nhap vao so n: ");
	scanf("%d", &n);

	printf("Tong cac so le tu 1 den %d la: %d", n, tong_so_le(n));
}

int tong_so_le (int n)
{
	int sum = 0;
	for(int i = 1; i <= n; i+=2)
	{
		sum+=i;
	}
	return sum;
}
