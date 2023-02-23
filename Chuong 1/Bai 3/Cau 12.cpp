#include <stdio.h>

int main()
{
    int a, b, USC;
    int max, bsc;
    printf("Nhap a, b: ");
    scanf("%d%d", &a, &b);

    for (int i = 1; i <= a && i <= b; i++) // tinh usc lon nhat nay
    {
        if (a % i == 0 && b % i == 0)
        {
            USC = i;
        }
    }

    max = (a > b) ? a : b; // tinh bsc nho nhat nay
    while (1)
    {
        if (max % a == 0 && max % b == 0)
        {
            bsc = max;
            break;
        }
        max++;
    }

    printf("USC lon nhat cau 2 so la: %d\n", USC);
    printf("Boi so chung nho nhat cua 2 so la: %d", bsc);

    return 0;
}