#include <stdio.h>
#define Tuancute 100

void nhap_so(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("a[%d]: ", i + 1);
		scanf("%d", &a[i]);
	}
}

void hien_thi(int a[], int n)
{
	printf("\n-Cac so vua nhap la: ");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}



int tinh_tong (int a[], int n)
{
	int sum = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i] >= 10 && a[i] <= 40)
		{
			sum+=a[i];
		}
	}
	return sum;
}


float tinh_tbc (int a[], int n)
{
	float dem = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i] >= 10 && a[i] <= 40)
		{
			dem++;
		}
	}
	float tbc = tinh_tong(a,n) / dem;
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

void sap_xep_giam_dan(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
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
	printf("\n-Sap xep theo chieu giam dan: ");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}

int main()
{
	int a[Tuancute];
	int n;
	printf(">> Nhap vao so cac so muon lap: ");
	scanf("%d", &n);

	nhap_so(a, n);
	hien_thi(a, n);

	printf("\n-Tong cac so trong khoang tu [10, 40] la: %d", tinh_tong(a,n));
	printf("\n-Trung binh cong cac so trong khoang tu [10, 40] la: %.2f", tinh_tbc(a,n));
	printf("\n-So nho nhat trong day so nguyen vua nhap la: %d", nho_nhat(a, n));

	sap_xep_giam_dan(a, n);

	return 0;
}