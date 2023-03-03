#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
    int n;
    int count = 0;
    printf("Nhap vao n: ");
    scanf("%d", &n);

    if (n < 2)
    {
        printf("%d khong phai so nguyen to", n);
        getch();
        return 0;
    }

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }

    if (count == 0)
    {
        printf("%d la so nguyen to", n);
    }
    else
    {
        printf("%d khong phai la so nguyen to", n);
    }

    getch();
    return 0;
}