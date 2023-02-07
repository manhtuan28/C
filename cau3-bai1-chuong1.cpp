#include <stdio.h>
#include <conio.h>

#define PI 3.14

int main()
{
	float r, S, V;
	printf("Nhap vao r: ");
	scanf("%f", &r);

	S = 4 * PI * r * r;
	V = PI * r * r * r;

	printf("Dien tich hinh cau la: %g\n", S);
	printf("The tich hinh cau la: %g\n", V);

	getch();
	return 0;
}
