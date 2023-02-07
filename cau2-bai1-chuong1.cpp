#include <stdio.h>
#include <conio.h>

int main () {
	float a,b,c;
	printf("Nhap vao a: ");
	scanf("%f", &a);
	printf("Nhap vao b: ");
	scanf("%f", &b);
	printf("Nhap vao c: ");
	scanf("%f", &c);

	if(a>b && a>c) {
		printf("%g lon nhat", a);
	} else if(b>a && b>c) {
		printf("%g lon nhat", b);
	} else if(c>a && c>b) {
		printf("%g lon nhat", c);
	} else {
		printf("Ca ba so deu bang nhau");
	}

	getch();
	return 0;
}
