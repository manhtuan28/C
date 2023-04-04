#include <stdio.h>

int so_lon_nhat (int a, int b, int c);
int so_nho_nhat (int a, int b, int c);

int main ()
{
	int a,b,c;
	printf("Nhap vao a: ");
	scanf("%d", &a);
	printf("Nhap vao b: ");
	scanf("%d", &b);
	printf("Nhap vao c: ");
	scanf("%d", &c);

	printf("So lon nhat la: %d\n", so_lon_nhat(a,b,c));
	printf("So nho nhat la: %d", so_nho_nhat(a,b,c));

	return 0;
}

int so_lon_nhat (int a, int b, int c)
{
	int max;

	max = a > b ? a : b;
	max = c > max ? c : max;

	return max;
}

int so_nho_nhat (int a, int b, int c)
{
	int min;

	min = a < b ? a : b;
	min = c < min ? c : min;

	return min;
}
