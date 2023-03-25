#include <stdio.h>

#define MAX_ARR 100

void NhapMang(int a[], int n);
void XuatMang(int a[], int n);
void timphantu(int a[],int n);

main ()
{
	int a[MAX_ARR] , n,x,k;
	printf("Nhap so phan tu: ");
	scanf("%d", &n);
	
	NhapMang(a,n);
	XuatMang(a,n);
	timphantu(a,n);
	
	return 0;
}
void NhapMang (int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}
void XuatMang (int a[], int n)
{
	printf ("\n>> Mang vua nhap la: ");
	for (int i = 0; i < n; i ++)
		printf (" %d ", a[i]);
}
void timphantu(int a[],int n)
{
	for(int i = 0; i < n; i++)
		for(int j = i + 1; j < n; j++)
			for(int k = j + 1; k < n; k++)
			{
				if(a[i] == a[j] + a[k])
					printf("\n\n>> Thoa man dieu kien de bai (%d, %d, %d)", a[i], a[j], a[k]);
				if(a[j] == a[i] + a[k])
					printf("\n\n>> Thoa man dieu kien de bai (%d, %d, %d)", a[j], a[i], a[k]);
				if(a[k] == a[j] + a[i])
					printf("\n\n>> Thoa man dieu kien de bai (%d, %d, %d)", a[k], a[j], a[i]);
			}
}
