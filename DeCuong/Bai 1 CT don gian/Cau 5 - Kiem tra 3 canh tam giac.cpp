#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c, p, s;

	printf("Nhap vao a: ");
	scanf("%f", &a);
	printf("Nhap vao b: ");
	scanf("%f", &b);
	printf("Nhap vao c: ");
	scanf("%f", &c);;

	if (a + b > c && b + c > a && c + a > b)
	{
		p = (a + b + c) / 2;
		printf("Chu vi cua tam giac la: %.2f \n", 2 * p);

		s = sqrt(p * (p - a) * (p - b) * (p - c));
		printf("Dien tich cua tam giac la: %.2f", s);
	}
	else
	{
		printf("Day khong phai la ba canh cua tam giac.");
	}

	return 0;
}
