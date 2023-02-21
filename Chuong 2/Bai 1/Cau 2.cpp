#include <stdio.h>
#include <math.h>

// 0 sai, 1 dung

int songuyen(int n)
{
    if (n < 2)
    {
        return 0;
    }

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

void lapLai(int n)
{
    printf("\nCac so nguyen to nho hon %d la: ", n);
    for (int i = 2; i < n; i++)
    {
        if (songuyen(i) == 1)
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    int n;
    printf("Nhap vao n: ");
    scanf("%d", &n);

    if (songuyen(n) == 1)
    {
        printf("%d la so nguyen to", n);
    }
    else
    {
        printf("%d khong phai so nguyen to", n);
    }
    lapLai(n);

    return 0;
}