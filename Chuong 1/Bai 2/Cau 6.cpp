#include <stdio.h>
#include <conio.h>

int main()
{
    int time,hourly,sum;
    printf("Nhap vao so thoi gian lam viec: ");
    scanf("%d",&time);
    printf("Nhap vao so tien luong: ");
    scanf("%d",&hourly);

    if(time > 40){
        sum = hourly * time * 1.5;
    }
    else{
        sum = hourly * time;
    }

    printf("%d\n", sum);

    return 0;
}