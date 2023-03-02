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

int tinh_tong()
{
    int sum = 0;
    for (int i = 10; i < 40; i++)
    {
        sum += i;
    }
    return sum;
}

float tinh_tbc()
{
    int tong = tinh_tong();
    int soluong = 40 - 10 + 1;
    float tbc = (float)tong / soluong;
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
}

void hien_thi_giam(int a[], int n)
{
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
    printf("\n-Tong cac so tu 10-40 la: %d", tinh_tong());
    printf("\n-Trung binh cong tu 10-30 la: %.2f", tinh_tbc());
    printf("\n-So nho nhat trong day so nguyen vua nhap la: %d", nho_nhat(a, n));
    sap_xep_giam_dan(a, n);
    hien_thi_giam(a, n);

    return 0;
}