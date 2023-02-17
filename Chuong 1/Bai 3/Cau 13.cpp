#include <stdio.h>



/*
    tinh tong cac so nhap vao khi nao ma no lon hon 100 thi chuong trinh se dung lai
    nhap 99 xong nhap 2 se ket thuc chuong trinh vi 101 > 100 roi
*/

int main() {
    int num, sum = 0;
    while(sum <= 100) {
        printf("Nhap vao mot so nguyen: ");
        scanf("%d", &num);
        sum += num;
    }
    
    printf("Tong cac so la: %d", sum);
    return 0;
}
