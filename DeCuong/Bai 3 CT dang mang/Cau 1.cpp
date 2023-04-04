#include <stdio.h>

#define MAX_ARR 100

void nhap_mang (int a[], int n);
void in_mang (int a[], int n);

int tinh_tong (int a[], int n);
float tinh_tbc (int a[], int n);
long tinh_tich (int a[], int n);

void sap_xep_tang (int a[], int n);
void sap_xep_giam (int a[], int n);

int so_nho_nhat (int a[], int n);
int so_lon_nhat (int a[], int n);

void them_phan_tu (int a[], int n);

float tinh_tbc_all (int a[], int n);
int tinh_tong_all (int a[], int n);

void xoa_phan_tu_0(int a[], int *n);

int kiem_tra_tang(int a[], int n);
int kiem_tra_giam(int a[], int n);

int main ()
{
	//Nhap so n;
	int a[MAX_ARR];
	int n;
	printf("Nhap vao so phan tu trong mang: ");
	scanf("%d", &n);

	//Nhap va hien thi gia tri mang
	nhap_mang(a,n);
	printf("Cac phan tu co trong mang: ");
	in_mang(a,n);

	//Tinh toan trong khoang [10 -> 20]
	printf("\nTong cac phan tu trong khoang [10 -> 20] la: %d", tinh_tong(a,n));
	printf("\nTrung binh cong cac phan tu trong khoang [10 -> 20] la: %.2f", tinh_tbc(a,n));
	printf("\nTich cac phan tu trong khoang [10 -> 20] la: %d", tinh_tich(a,n));

	//Sap xep
	sap_xep_tang(a,n);
	sap_xep_giam(a,n);

	//Tim so lon nhat nho nhat
	printf("\nSo nho nhat trong mang la: %d", so_nho_nhat(a,n));
	printf("\nSo lon nhat trong mang la: %d", so_lon_nhat(a,n));

	//Them phan tu
	them_phan_tu(a,n);

	//Tinh toan tat cac cac phan tu
	printf("\nTrung binh cong cac so co trong mang: %.2f", tinh_tbc_all(a,n));
	printf("\nTong cac so co trong mang: %d", tinh_tong_all(a,n));

	//Xoa phan tu bang 0
	xoa_phan_tu_0(a, &n);

	// Kiem tra day tang hay giam
	if (kiem_tra_tang(a, n))
	{
		printf("\nDay la day so tang");
	}
	else if (kiem_tra_giam(a, n))
	{
		printf("\nDay la day so giam");
	}
	else
	{
		printf("\nDay so nay khong tang cung khong giam");
	}


	return 0;
}

void nhap_mang (int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}

void in_mang (int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}

int tinh_tong (int a[], int n)
{
	int sum = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i] >= 10 && a[i] <= 20)
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
		if(a[i] >= 10 && a[i] <= 20)
		{
			dem++;
		}
	}
	float tbc = tinh_tong(a,n) / dem;
	return tbc;
}

long tinh_tich (int a[], int n)
{
	long tich = 1;
	for(int i = 0; i < n; i++)
	{
		if(a[i] >= 10 && a[i] <= 20)
		{
			tich*=a[i];
		}
	}
	return tich;
}

void sap_xep_tang (int a[], int n)
{
	for(int i = 0; i < n - 1; i++)
	{
		for(int j = 0; j < n - i - 1; j++)
		{
			if(a[j] > a[j+1])
			{
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	printf("\nSau khi sap xep tang dan: ");
	in_mang(a,n);
}

void sap_xep_giam (int a[], int n)
{
	for(int i = 0; i < n - 1; i++)
	{
		for(int j = 0; j < n - i - 1; j++)
		{
			if(a[j] < a[j+1])
			{
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	printf("\nSau khi sap xep giam dan: ");
	in_mang(a,n);
}

int so_nho_nhat (int a[], int n)
{
	int min = a[0];
	for(int i = 0; i < n; i++)
	{
		if(a[i] < min)
		{
			min = a[i];
		}
	}
	return min;
}

int so_lon_nhat (int a[], int n)
{
	int max = a[0];
	for(int i = 0; i < n; i++)
	{
		if(a[i] > max)
		{
			max = a[i];
		}
	}
	return max;
}

void them_phan_tu (int a[], int n)
{
	int x,k;
	printf("\n\nNhap vao vi tri can them: ");
	scanf("%d", &k);
	printf("Nhap vao gia tri can them: ");
	scanf("%d", &x);

	if(k < 0 || k > n)
	{
		printf("Vi tri %d khong hop le", k);
		return;
	}

	for(int i = x; i >= k; i--)
	{
		a[i+1] = a[i];
	}
	a[k] = x;
	n++;
	printf("Sau khi them phan tu: ");
	in_mang(a,n);
}

float tinh_tbc_all (int a[], int n)
{
	float dem = 0;
	for(int i = 0; i <= n; i++)
	{
		dem++;
	}
	float tbc = tinh_tong_all(a,n) / dem;
	return tbc;
}

int tinh_tong_all (int a[], int n)
{
	int sum;
	for(int i = 0; i <= n; i++)
	{
		sum+=a[i];
	}
	return sum;
}

void xoa_phan_tu_0(int a[], int *n)
{
	int j = 0;
	for (int i = 0; i < *n; i++)
	{
		if (a[i] != 0)
		{
			a[j] = a[i];
			j++;
		}
	}
	*n = j;
	printf("\nMang sau khi xoa phan tu bang 0: ");
	in_mang(a,*n);
}

int kiem_tra_tang(int a[], int n)
{
	for (int i = 1; i < n; i++)
	{
		if (a[i - 1] > a[i])
		{
			return 0;
		}
	}
	return 1;
}

int kiem_tra_giam(int a[], int n)
{
	for (int i = 1; i < n; i++)
	{
		if (a[i - 1] < a[i])
		{
			return 0;
		}
	}
	return 1;
}
