#include <stdio.h>

#define Tuancute 100

void nhap_so (float a[], int n) {
	for(int i = 0; i < n; i++) {
		printf("a[%d]: ", i+1);
		scanf("%f", &a[i]);
	}
}


void hien_thi (float a[], int n) {
	printf("-Cac so vua nhap trong mang la: ");
	for(int i = 0; i < n; i++) {
		printf("%g  ", a[i]);
	}
}

float tinh_tong (float a[], int n) {
	float sum = 0;
	for(int i = 0; i < n; i++) {
		if(a[i] >= -10 && a[i] <= 20) {
			sum+=a[i];
		}
	}
	return sum;
}

float tinh_tbc (float a[], int n) {
	int dem = 0;
	for(int i = 0; i < n; i++) {
		if(a[i] >= -10 && a[i] <= 20) {
			dem++;
		}
	}
	int tbc = tinh_tong(a,n) / dem;
	return tbc;
}

int so_lon_nhat (float a[], int n) {
	int max = a[0];
	for(int i = 0; i < n; i++) {
		if(a[i] > max) {
			max = a[i];
		}
	}
	return max;
}

void chen_so(float a[], int n, float k, int m) {
	printf("\n\nNhap gia tri k can chen: ");
	scanf("%f", &k);
	printf("Nhap vi tri m can chen k vao: ");
	scanf("%d", &m);
	for (int i = n - 1; i >= m; i--) {
		a[i + 1] = a[i];
	}
	a[m] = k;
	printf("-Day so sau khi chen k vao vi tri m:\n");
	hien_thi(a, n + 1);
}

int main () {
	float a[Tuancute],k;	
	int n,m;
	printf("Nhap vao so luong so thuc: ");
	scanf("%d", &n);

	nhap_so(a,n);
	hien_thi(a,n);
	printf("\n-Tong cac so trong khoang [-10, 20] la: %g", tinh_tong(a,n));
	printf("\n-Trung binh cong cac so trong khoang [-10, 20] la: %g", tinh_tbc(a,n));
	printf("\n-So lon nhat tinh theo so nguyen la: %d", so_lon_nhat(a,n));

	chen_so(a, n, k, m);

	return 0;
}