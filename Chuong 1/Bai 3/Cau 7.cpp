#include <stdio.h>

/*
 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...

 0 + 1 = 1
 1 + 1 = 2
 2 + 1 = 3
 3 + 2 = 5
 5 + 3 = 8
 8 + 5 = 13.....
  lap lai nhu vay goi la dãy Fibonacci
*/

int main()
{
    int n, a = 0, b = 1, c, i;

    printf("Nhap vao so thu tu cua so Fibonacci can tinh: ");
    scanf("%d", &n);

    if (n == 0)
        printf("So Fibonacci thu 0 la: %d", a);
    else if (n == 1)
        printf("So Fibonacci thu 1 la: %d", b);
    else
    {
        for (i = 2; i <= n; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }
        printf("So Fibonacci thu %d la: %d", n, c);
    }

    return 0;
}
