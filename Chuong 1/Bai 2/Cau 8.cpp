#include <stdio.h>
#include <conio.h>

int main () {
    int n;
    printf("Nhap vao so n: ");
    scanf("%d", &n);

        switch (n)
        {
        case 1:
            printf("One");
            break;
        case 2:
            printf("Two");
            break;
        case 3:
            printf("Three");
            break;
        case 4:
            printf("Four");
            break;
        case 5:
            printf("Five");
            break;
        default:
            printf("Len google ma dich deo ai biet");
            break;
        }

    getch();
    return 0;
}