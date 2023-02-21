#include <stdio.h>
#include <math.h>


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
