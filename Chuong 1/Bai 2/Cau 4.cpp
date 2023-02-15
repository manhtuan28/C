#include <stdio.h>
#include <conio.h>
#include <math.h>

#define p 0.5

int main()
{
	int a, b, c;
	double S;
	printf("Nhap vao a: ");
	scanf("%d", &a);
	printf("Nhap vao b: ");
	scanf("%d", &b);
	printf("Nhap vao c: ");
	scanf("%d", &c);

	S = sqrt(p * (p - a) * (p - b) * p - c);

	if ((a + b) > c && (a + c) > b && (b + c) > a)
		printf("Day la 3 canh cua tam giac");
	else
		printf("Dien tich cua tam giac la: %lf", S);
	

	getch();
	return 0;
}
