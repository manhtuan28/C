// tinh tong and trung bin cong chiu nheeee.
//chua xong dau ae dung chep.....

#include <stdio.h>

#define Tuancute 1000

void nhap_so(float a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhap a[%d]: ", i + 1);
        scanf("%f", &a[i]);
    }
}

void hien_thi(float a[], int n) {
    printf("Day so thuc vua nhap: ");
    for (int i = 0; i < n; i++) {
        printf("%.1f  ", a[i]);
    }
}

float tinh_tong(float a[], int n) {
    float sum = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] >= -10 && a[i] <= 40) {
            sum += a[i];
        }
    }
    return sum;
}

float tinh_tbc(float a[], int n) {
    float tong = tinh_tong(a, n);
    int soluong = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] >= -10 && a[i] <= 40) {
            soluong++;
        }
    }
    float tbc = tong / soluong;
    return tbc;
}

int main() {
    float a[Tuancute];
    int n;
    printf("Nhap so luong so thuc: ");
    scanf("%d", &n);
    nhap_so(a, n);
    hien_thi(a, n);
    printf("\nTong cac so thuc trong khoang tu 10 den 40 la: %.2f", tinh_tong(a, n));
    printf("\nTrung binh cong cac so thuc trong khoang tu 10 den 40 la: %.2f", tinh_tbc(a, n));

    return 0;
}
