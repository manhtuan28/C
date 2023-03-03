#include <stdio.h>
#include <math.h>

int GT(int k)
{
    if (k == 0 || k == 1)
    {
        return 1;
    }
    else
    {
        return k * GT(k - 1);
    }
}

int main()
{
    int k;
    printf("Nhap vao k: ");
    scanf("%d", &k);

    printf("Tong giai thua tu 1 den %d la: %d", k, GT(k));
    return 0;
}
