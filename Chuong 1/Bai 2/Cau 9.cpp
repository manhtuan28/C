#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b, luaChon;
    printf("=====MENU=====");
    printf("\n1. Cong\n2. Tru\n3. Nhan\n4. Chia\n0.Thoat");
    printf("\n\nLua chon: ");
    scanf("%d", &luaChon);

    switch (luaChon)
    {
    case 0:
        break;
    case 1:
        printf("\nNhap vao a: ");
        scanf("%d", &a);
        printf("\nNhap vao b: ");
        scanf("%d", &b);
        printf("%d + %d = %d", a, b, a + b);
        break;
    case 2:
        printf("\nNhap vao a: ");
        scanf("%d", &a);
        printf("\nNhap vao b: ");
        scanf("%d", &b);
        printf("%d - %d = %d", a, b, a - b);
        break;
    case 3:
        printf("\nNhap vao a: ");
        scanf("%d", &a);
        printf("\nNhap vao b: ");
        scanf("%d", &b);
        printf("%d * %d = %d", a, b, a * b);
        break;
    case 4:
        printf("\nNhap vao a: ");
        scanf("%d", &a);
        printf("\nNhap vao b: ");
        scanf("%d", &b);
        printf("%d / %d = %d", a, b, a / b);
        break;

    default:
        printf("Khong hop le");
        break;
    }

    printf("\n\nNhan enter de thoat");
    getch();
    return 0;
}