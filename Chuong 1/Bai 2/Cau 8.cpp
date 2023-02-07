#include <stdio.h>
#include <conio.h>

int main () {
    int n;
    printf("Nhap vao so n: ");
    scanf("%d", &n);

    if(0 <= n && n <= 5){
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
    }
    else{
        return 0;
    }

    getch();
    return 0;
}