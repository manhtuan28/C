#include <stdio.h>

int giaithua(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * giaithua(n - 1);
    }
}

int tophopchapk(int n, int k)
{
    if (k > n)
    {
        return 0;
    }
    else
    {
        return giaithua(n) / (giaithua(k) * giaithua(n - k));
    }
}

int main()
{
    int n, k;
    printf("Nhap vao gia tri cua n: ");
    scanf("%d", &n);
    printf("Nhap vao gia tri cua k: ");
    scanf("%d", &k);

    if (k < 0 || k > n)
    {
        printf("Khong the tinh toan tong hop chap k cua n!");
    }
    else
    {
        int result = tophopchapk(n, k);
        printf("Tong hop chap %d cua %d la %d", k, n, result);
    }
    return 0;
}
