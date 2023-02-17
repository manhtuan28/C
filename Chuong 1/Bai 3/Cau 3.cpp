#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Nhap n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i += 2) // lặp qua các số lẻ từ 1 đến n
    {
        sum += i * i; // tính tổng bình phương các số lẻ
    }

    printf("Tong binh phuong cac so le tu 1 den %d la: %d", n, sum);

    return 0;
}
