
// A. su dung de quy
/*
#include <stdio.h>

double power(double a, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return a * power(a, n - 1);
    }
}

int main()
{
    double a;
    int n;

    printf("Nhap a: ");
    scanf("%lf", &a);

    printf("Nhap n: ");
    scanf("%d", &n);

    printf("%lf^%d = %lf", a, n, power(a, n));

    return 0;
}
*/


// B. Khong dung de quy
/*
#include <stdio.h>

double power(double a, int n);

int main()
{
    double a;
    int n;

    printf("Nhap a: ");
    scanf("%lf", &a);

    printf("Nhap n: ");
    scanf("%d", &n);

    printf("%lf^%d = %lf", a, n, power(a, n));

    return 0;
}

double power(double a, int n)
{
    double result = 1;

    while (n > 0)
    {
        if (n % 2 == 1)
        {
            result *= a;
        }
        a *= a;
        n /= 2;
    }

    return result;
}
*/