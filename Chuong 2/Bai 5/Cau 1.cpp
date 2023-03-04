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
        printf("Khong the tinh toan to hop chap k cua n!");
    }
    else
    {
        printf("To hop chap %d cua %d la %d", k, n, tophopchapk(n,k));
    }
    return 0;
}
