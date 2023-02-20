#include <stdio.h>
#include <math.h>

void canbachai()
{
    int n, ncanbac;
    printf("Nhap vao mot so nguyen duong: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("So nhap khong hop le");
    }
    else
    {
        ncanbac = sqrt(n);

        printf("%d", ncanbac);
    }
}

int main()
{

    canbachai();

    return 0;
}