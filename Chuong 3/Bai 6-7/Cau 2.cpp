#include <stdio.h>

#define MAX_ARR 100

void nhap_mang(float a[], int n);
void hien_thi(float a[], int n);
float tinh_tong(float a[], int n);
float tinh_tbc(float a[], int n);
float so_lon_nhat(float a[], int n);
void them_phan_tu(float a[], int n);

int main()
{
	float a[MAX_ARR];
	int n;
	printf("Nhap vao so n: ");
	scanf("%d", &n);

	nhap_mang(a, n);
	hien_thi(a, n);

	if (tinh_tong(a, n) == 0)
		printf("\n>> Khong co so nao trong khoang [-10,20]");
	else
		printf("\n>> Tong trong khoang [-10,20] la: %g", tinh_tong(a, n));

	if (tinh_tbc(a, n) == 0)
		printf("\n>> Khong co so nao trong khoang [-10,20]");
	else
		printf("\n>> Trung binh cong trong khoang [-10,40] la: %g", tinh_tbc(a, n));

	printf("\n>> So lon nhat trong mang la: %g", so_lon_nhat(a, n));

	them_phan_tu(a, n);

	return 0;
}

void nhap_mang(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("a[%d]: ", i);
		scanf("%f", &a[i]);
	}
}

void hien_thi(float a[], int n)
{
	printf("\n>> Cac so co trong mang la: ");
	for (int i = 0; i < n; i++)
	{
		printf("%g  ", a[i]);
	}
}

float tinh_tong(float a[], int n)
{
	float sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] >= -10 && a[i] <= 20)
		{
			sum += a[i];
		}
	}
	return sum;
}

float tinh_tbc(float a[], int n)
{
	float dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] >= -10 && a[i] <= 20)
		{
			dem++;
		}
	}
	if (dem == 0)
	{
		return 0;
	}
	float tbc = tinh_tong(a, n) / dem;
	return dem;
}

float so_lon_nhat(float a[], int n)
{
	float max = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
	}
	return max;
}

void them_phan_tu(float a[], int n)
{
	int m;
	float k;
	printf("\n\nNhap vao vi tri can them: ");
	scanf("%d", &m);
	printf("Nhap vao gia tri can them: ");
	scanf("%f", &k);

	if (m < 0 || m > n)
	{
		printf("Vi tri %d khong hop le", m);
		return;
	}

	for (int i = k; i >= m; i--)
	{
		a[i + 1] = a[i];
	}
	a[m] = k;
	n++;
	printf("\n>> Sau khi them phan tu: ");
	hien_thi(a, n);
}