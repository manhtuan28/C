#include <stdio.h>

#define MAX_ARR 100

void nhap_mang(int a[], int t);
void xuat_mang(int a[], int t);
void xoa_mang(int a[], int t, int m, int n);

int main()
{
	int a[MAX_ARR];
	int t, m, n;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &t);

	nhap_mang(a, t);
	printf("\n>> Cac phan tu co trong mang la: ");
	xuat_mang(a,t);

	xoa_mang(a, t, m, n);

	return 0;
}

void nhap_mang(int a[], int t)
{
	for (int i = 0; i < t; i++)
	{
		printf("a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}

void xuat_mang(int a[], int t)
{
	for (int i = 0; i < t; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

void xoa_mang(int a[], int t, int m, int n)
{
	printf("\nNhap phan tu thu 1 can xoa: ");
	scanf("%d", &m);
	printf("Nhap phan tu thu 2 can xoa: ");
	scanf("%d", &n);

	int i, j;
	for (i = m; i < t-1; i++)
	{
		a[i] = a[i+1];
	}
	for (j = n; j < t-1; j++)
	{
		a[j] = a[j+1];
	}
	t-=2;
	printf("\n>> Mang moi sau khi xoa la: ");
	xuat_mang(a,t);
}
