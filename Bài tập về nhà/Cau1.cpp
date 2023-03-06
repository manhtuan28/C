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

void them_phan_tu(int a[], int n, int k, int x)
{
    if (k < 0 || k >= n)
    {
        printf("Vi tri %d khong hop le", k);
        return;
    }

    for (int i = n - 1; i >= k; i--)
    {
        a[i + 1] = a[i];
    }
    a[k] = x;
    n++;
    printf("\nMang sau khi duoc them: ");
    for (int i = 0; i < n; i++)
    {
        printf("%6d", a[i]);
    }
}

int main()
{
    int a[Tuancute];
    int n, k, x;
    printf("Nhap n: ");
    scanf("%d", &n);

    nhap_so(a, n);
    hien_thi(a, n);

    printf("\nNhap vao vi tri can doi: ");
    scanf("%d", &k);
    printf("Nhap gia tri: ");
    scanf("%d", &x);
    them_phan_tu(a, n, k, x);

    return 0;
}