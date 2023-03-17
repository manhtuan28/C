#include <stdio.h>

#define MAX_ARR 100

void nhap_mang(int a[], int n);
void hien_thi(int a[], int n);
int tinh_tong(int a[], int n);
float tinh_tbc(int a[], int n);
int so_nho_nhat(int a[], int n);
void sap_xep_giam(int a[], int n);

int main()
{
	int a[MAX_ARR];
	int n;
	printf("Nhap vao so n: ");
	scanf("%d", &n);

	nhap_mang(a, n);
	printf("\n>> Cac so co trong mang la: ");
	hien_thi(a, n);

	if (tinh_tong(a, n) == 0)
		printf("\n>> Khong co so nao trong khoang [10,40]");
	else
		printf("\n>> Tong cac so trong khoang [10,40] la: %d", tinh_tong(a, n));

	if (tinh_tbc(a, n) == 0)
		printf("\n>> Khong co so nao trong khoang [10,40]");
	else
		printf("\n>> Trung binh cong cac so trong khoang [10,40] la: %.2f", tinh_tbc(a, n));

	printf("\n>> So nho nhat trong mang la: %d", so_nho_nhat(a, n));

	sap_xep_giam(a, n);

	return 0;
}

void nhap_mang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}

void hien_thi(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}

int tinh_tong(int a[], int n)
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

float tinh_tbc(int a[], int n)
{
	float dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] >= 10 && a[i] <= 40)
		{
			dem++;
		}
	}
	if (dem == 0)
	{
		return 0;
	}
	float tbc = tinh_tong(a, n) / dem;
	return tbc;
}

int so_nho_nhat(int a[], int n)
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
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (a[j + 1] > a[j])
			{
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	printf("\n>> Sau khi sap xep giam la: ");
	hien_thi(a, n);
}