#include <stdio.h>

int timucln(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    else if (b == 0)
    {
        return a;
    }
    else
    {
        if (a > b)
        {
            return timucln(a - b, b);
        }
        else
        {
            return timucln(a, b - a);
        }
    }
}

int main()
{
    int a, b;
    printf(">> Nhap vao so a: ");
    scanf("%d", &a);
    printf(">> Nhap vao so b: ");
    scanf("%d", &b);

    int ucln = timucln(a, b);

    printf("Uoc chung lon nhat cua %d va %d la: %d\n", a, b, ucln);

    return 0;
}
