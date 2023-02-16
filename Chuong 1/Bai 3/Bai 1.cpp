#include <stdio.h>
#include <conio.h>

int main()
{
    int n, number;
    int cube, sum = 0;
    printf("Nhap vao so n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("Nhap so %d: ", i);
        scanf("%d", &number);

        cube = number * number * number;
        sum += cube;
    }

    printf("Tong can bac 3 la: %d", sum);

    return 0;
}