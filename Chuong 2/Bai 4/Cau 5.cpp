#include <stdio.h>
#include <math.h>

int chinhphuong(int n)
{
    int s = sqrt(n);
    return (s * s == n);
}

int main()
{
    int n;
    printf(">> Nhap vao n: ");
    scanf("%d", &n);

    if (chinhphuong(n) == 1)
    {
        printf("%d la so chinh phuong", n);
    }
    else
    {
        printf("%d khong phai so chinh phuong", n);
    }

    return 0;
}