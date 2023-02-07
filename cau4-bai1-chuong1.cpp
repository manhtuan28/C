#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	int a, a2, a3, Square_Root;
	printf("Nhap vao a: ");
	scanf("%d", &a);

	a2 = a * a;
	a3 = a * a * a;
	Square_Root = sqrt(a);

	printf("a2 la: %d\n", a2);
	printf("a3 la: %d\n", a3);
	printf("Can bac hai cua %d la: %d", a, Square_Root);

	getch();
	return 0;
}
