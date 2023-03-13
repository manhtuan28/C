#include <stdio.h>
#include <conio.h>

int main()
{
    int n;
    int sum = 0;
    printf("Nhap vao so n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum+=i * i * i;
    }

    printf("Tong bac 3 la: %d", sum);

    return 0;
}