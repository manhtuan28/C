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
        printf("%6d", a[i]);
    }
}

void xoa_phan_tu(int a[], int n, int k)
{
    printf("\nNhap vao vi tri can xoa: ");
    scanf("%d", &k);
    if (k < 0 || k >= n)
    {
        printf("Vi tri %d khong hop le", k);
        return;
    }

    for (int i = k; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    n--;
    printf("Sau khi xoa: ");
    for (int i = 0; i < n; i++)
    {
        printf("%6d", a[i]);
    }
}

int main()
{
    int a[Tuancute];
    int n, k;
    printf("Nhap n: ");
    scanf("%d", &n);

    nhap_so(a, n);
    hien_thi(a, n);
    xoa_phan_tu(a, n, k);

    return 0;
}