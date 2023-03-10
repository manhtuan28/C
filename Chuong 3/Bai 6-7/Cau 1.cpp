#include <stdio.h>

#define Tuancute 100

void nhap_so(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}

void hien_thi(int a[], int n)
{
	printf("Cac so co trong mang la: ");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}

int tong(int a[], int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] >= 10 && a[i] <= 40)
		{
			sum += a[i];
		}
	}
	return sum;
}

float trung_binh_cong(int a[], int n)
{
	float dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] >= 10 && a[i] <= 40)
		{
			dem++;
		}
	}

	float tbc = tong(a, n) / dem;
	return tbc;
}

int nho_nhat(int a[], int n)
{
	int min = a[0];

	for (int i = 0; i < n; i++)
	{
		if (a[i] < min)
		{
			min = a[i];
		}
	}
	return min;
}

void sap_xep_giam(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (a[j] < a[j + 1])
			{
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	printf("Sap xep giam dan: ");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}

int main()
{
	int a[Tuancute];
	int n;
	printf("Nhap vao so gia tri mang can: ");
	scanf("%d", &n);

	nhap_so(a, n);
	hien_thi(a, n);

	printf("\n\nTong cac so tu [10,40] la: %d\n", tong(a, n));
	printf("\nTBC cac so tu [10,40] la: %.2f\n", trung_binh_cong(a, n));
	printf("\nSo nho nhat trong mang la: %d\n\n", nho_nhat(a, n));

	sap_xep_giam(a, n);

	return 0;
}