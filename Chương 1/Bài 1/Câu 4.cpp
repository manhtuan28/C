#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	int a, Square_Root;
	printf("Nhap vao a: ");
	scanf("%d", &a);

	Square_Root = sqrt(a);

	printf("a^2 la: %d\n", a * a);
	printf("a^3 la: %d\n", a * a * a);
	printf("Can bac hai cua %d la: %d", a, Square_Root);

	getch();
	return 0;
}
