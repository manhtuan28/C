#include <stdio.h>
#include <math.h>

int songuyen(int n);
void kiem_tra(int n);

int main()
{
	int n;
	printf("Nhap vao n: ");
	scanf("%d", &n);

	if (songuyen(n) == 1)
	{
		printf("%d la so nguyen to", n);
	}
	else
	{
		printf("%d khong phai so nguyen to", n);
	}
	kiem_tra(n);

	return 0;
}

int songuyen(int n)
{
	if (n < 2)
	{
		return 0;
	}

	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

void kiem_tra(int n)
{
	printf("\nCac so nguyen to nho hon %d la: ", n);
	for (int i = 2; i < n; i++)
	{
		if (songuyen(i) == 1)
		{
			printf("%d ", i);
		}
	}
}
