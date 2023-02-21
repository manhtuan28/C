#include <stdio.h>

int tong(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n + tong(n - 1);
    }
}

int main()
{
    int n, sum;
    printf("Nhap vao so n: ");
    scanf("%d", &n);
    sum = tong(n);
    printf("Tong S = 1+2+3+...+%d la: %d", n, sum);
    return 0;
}
