#include <stdio.h>
#include <conio.h>

int main()
{
	int a, b;
	printf("Nhap vao a: ");
	scanf("%d", &a);
	printf("Nhap vao b: ");
	scanf("%d", &b);

	if (a % b == 0)
	{
		printf("%d chia het cho %d", a, b);
	}
	else
	{
		printf("%d khong chia het cho %d", a, b);
	}

	return 0;
}
