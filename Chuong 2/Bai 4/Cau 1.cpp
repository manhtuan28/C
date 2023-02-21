#include <stdio.h>
#include <math.h>

int nguyento(int n)
{
    if (n < 2)
    {
        printf("%d khong phai so nguyen to", n);
        return 1;
    }

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            printf("%d khong phai so nguyen to", n);
            return 1;
        }
    }
    return 0;
}

int main()
{
    int n;
    printf("nhap vao n: ");
    scanf("%d", &n);

    if (nguyento(n) == 0)
    {
        printf("%d la so nguyen to", n);
    }

    return 0;
}