#include <stdio.h>
#include <conio.h>

int main () {
    int km,sum;
    printf("Nhap vao so km: ");
    scanf("%d", &km);
    
    if(km == 1){
        sum = 15000;
    }
    else if(km >=2 && km <= 20){
        sum = 20000;
    }
    else{
        sum = 250000;
    }

    printf("So tien can thanh toan la: %d", sum*km);
    
    getch();
    return 0;
}