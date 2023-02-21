#include <stdio.h>

/*
 int giaithua;
    gan s = 1;
    neu n == 0 thi return 1 => printf("1");

    con ko thi lap:
    gan i = 1; i nho hon || == n; cong i them 1;
    cho s * i roi gan lai cho s; sau do return ve s;

    main:
    int n;
    lam: cho nguoi dung nhap vao;
    lap lai khi n < 0;

    in ra net qua giai thua N! = %d, goi ham giaithua(n);
*/


// khong dung ham de quy vi: o bai 4 chua hoc nen khong dung.

// neu van thic thi day:
/*
    int giaithua(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * giaithua(n - 1);
    }
}
*/
int giaithua(int n)
{
    int s = 1;
    if (n == 0)
    {
        return 1;
    }

    for (int i = 1; i <= n; i++)
    {
        s *= i;
    }
    return s;
}

int main()
{
    int n;

    do
    {
        printf("Nhap n: ");
        scanf("%d", &n);
    }

    while (n < 0);

    printf("N! = %d", giaithua(n));

    return 0;
}