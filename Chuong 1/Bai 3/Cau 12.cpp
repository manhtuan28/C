#include <stdio.h>

int main()
{
    int a, b, USC, BSC;
    printf("Nhap so a: ");
    scanf("%d", &a);
    printf("Nhap so b: ");
    scanf("%d", &b);

    int x = a, y = b, temp;
    while (y != 0)
    {
        temp = y;
        y = x % y;
        x = temp;
    }
    USC = x;
    BSC = (a * b) / USC;

    printf(">> USC lon nhat cua 2 so la: %d\n", USC);
    printf(">> Boi so chung nho nhat cua 2 so la: %d", BSC);

    return 0;
}