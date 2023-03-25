#include <stdio.h>

void xoa_phan_tu_0(int arr[], int *n);

int main()
{
	int arr[100];
	int n;
	printf("Nhap so luong phan tu cua mang: ");
	scanf("%d", &n);

	xoa_phan_tu_0(arr, &n);

	return 0;
}

void xoa_phan_tu_0(int arr[], int *n)
{
	printf("Nhap gia tri cho mang:\n");
	for (int i = 0; i < *n; i++)
	{
		printf("a[%d]: ", i);
		scanf("%d", &arr[i]);
	}

	int j = 0;
	for (int i = 0; i < *n; i++)
	{
		if (arr[i] != 0)
		{
			arr[j] = arr[i];
			j++;
		}
	}
	*n = j;

	printf("Mang sau khi xoa phan tu bang 0: ");
	for (int i = 0; i < *n; i++)
	{
		printf("%d ", arr[i]);
	}
}
