#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	int a, canbac2;
	printf("Nhap vao a: ");
	scanf("%d", &a);

	canbac2 = sqrt(a);

	printf("a^2 la: %d\n", a * a);
	printf("a^3 la: %d\n", a * a * a);
	printf("Can bac hai cua %d la: %d", a, canbac2);

	getch();
	return 0;
}
