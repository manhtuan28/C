#include <stdio.h>

int main()
{
	int so, tong, a, b, c;
	printf("Cac so co tong lap phuong bang chinh no la: \n");
	for (so = 100; so <= 405; so++)
	{
		a = so / 100;
		b = (so / 10) % 10;
		c = so % 10;
		tong = a*a*a + b*b*b + c*c*c;
		if (tong == so)
			printf("%d\n", so);
	}
	return 0;
}

