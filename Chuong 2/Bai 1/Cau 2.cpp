#include <stdio.h>
#include <math.h>

void songuyento()
{
    int n, count = 0;
    int i;
    printf("Nhap vao n: ");
    scanf("%d", &n);

    if (n < 2)
    {
        printf("%d khong phai la so nguyen to", n);
    }

    for (i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }

    if (count == 0)
    {
        printf("%d la so nguyen to\nSo nguyen to cua %d la: %d", n, n, i);
    }
    else
    {
        printf("%d khong phai so nguyen to", n);
    }
}

int main()
{

    songuyento();

    return 0;
}