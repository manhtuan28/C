#include <stdio.h>

int main()
{
    int a, b, nhapPT;
    printf("===MENU===\n1.+\n2.-\n3.*\n4./\nVui long chon phep tinh: ");
    scanf("%d", &nhapPT);
    printf("Nhap vao a va b: ");
    scanf("%d %d", &a, &b);

    switch (nhapPT)
    {
    case 1:
        printf("%d + %d = %d", a, b, a + b);
        break;
    case 2:
        printf("%d - %d = %d", a, b, a - b);
        break;
    case 3:
        printf("%d * %d = %d", a, b, a * b);
        break;
    case 4:
        printf("%d / %d = %d", a, b, a / b);
        break;
    default:
        printf("Sai, nhap lai");
        break;
    }

    return 0;
}
