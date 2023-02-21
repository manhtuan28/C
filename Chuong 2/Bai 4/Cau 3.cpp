#include <stdio.h>
#include <math.h>

/*
    1 dung, 0 sai;
    cho canbachai va n la kieu float vi de bai yeu cau la mot so khong am;
    neu n < 0 thi in printf("Khong co can bac hai cua so am\n"); sau do return ve -1;
    tai sao lai return ve -1 ?: Vi neu nhu return ve 1 no se in ra gia tri dung va chinh no, con neu nhu de return 0; thi no se 
    in ra gia tri sai va chinh no

    neu khong thi se return ve can bac hai cau n;

    main:
    khai bai float n;
    cho nguoi dung nhap voa n tu ban phim;

    cho result la kieu float va gan cho ham canbachai(n);
    neu result khac -1 thi se in ra ket qua;

*/

float canbachai(float n) {
    if (n < 0) {
        printf("Khong co can bac hai cua so am\n");
        return -1;
    } else {
        return sqrt(n);
    }
}

int main() {
    float n;
    printf("Nhap vao so khong am: ");
    scanf("%f", &n);
    float result = canbachai(n);
    if (result != -1) {
        printf("Can bac hai cua %g la %.2f\n", n, result);
    }
    return 0;
}
