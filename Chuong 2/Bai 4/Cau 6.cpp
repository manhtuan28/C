#include <stdio.h>

double giaithua(int n)
{
	double sum = 0;
	double nghichdao = 1;

	for (int i = 1; i <= n; i++)
	{
		nghichdao *= i;
		sum += 1 / nghichdao;
	}
	return sum;
}

int main()
{
	int n;
	printf("Nhap vao n: ");
	scanf("%d", &n);

	printf("Tong nghich dao cua %d la: %f", n, giaithua(n));

	return 0;
}