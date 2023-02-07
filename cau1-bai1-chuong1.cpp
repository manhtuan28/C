#include <stdio.h>
#include <conio.h>

int main()
{
	int x, y;
	printf("Nhap vao x: ");
	scanf("%d", &x);
	printf("Nhap vao y: ");
	scanf("%d", &y);

	if (x > y)
	{
		printf("%d lon hon %d", x, y);
	}
	else if (x < y)
	{
		printf("%d nho hon %d", x, y);
	}
	else
	{
		printf("%d va %d bang nhau", x, y);
	}
	getch();
	return 0;
}
