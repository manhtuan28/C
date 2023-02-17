#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Nhap n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i += 2)
    {
        sum += i * i;
    }

    printf("Tong binh phuong cac so le tu 1 den %d la: %d", n, sum);

    return 0;
}
