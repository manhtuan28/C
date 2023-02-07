#include <stdio.h>
#include <conio.h>

int main()
{
	float a, b, c;
	float max, min;
	printf("Nhap vao a: ");
	scanf("%f", &a);
	printf("Nhap vao b: ");
	scanf("%f", &b);
	printf("Nhap vao c: ");
	scanf("%f", &c);
	if (a == b && b == c)
	{
		printf("3 so bang nhau");
	}
	else
	{

		max = a > b ? a : b;
		max = max > c ? max : c;

		min = a < b ? a : b;
		min = min < c ? min : c;

		printf("\nSo lon nhat la: %g\n", max);
		printf("So nho nhat la: %g", min);
	}

	getch();
	return 0;
}
