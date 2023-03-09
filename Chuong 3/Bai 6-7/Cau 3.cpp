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

int main()
{
    int a[Tuancute];
    int n;
    printf("Nhap vao n: ");
    scanf("%d", &n);

    nhap_so(a, n);

    if (kiem_tra_tang(a, n))
    {
        printf("Day la day so tang");
    }
    else if (kiem_tra_giam(a, n))
    {
        printf("Day la day so giam");
    }
    else
    {
        printf("Day so nay khong tang cung khong giam");
    }

    return 0;
}