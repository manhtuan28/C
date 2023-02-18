#include <stdio.h>
#include <conio.h>

int main()
{
	int toan, ly, hoa;
	int sum;
	printf("Nhap vao diem toan: ");
	scanf("%d", &toan);
	printf("Nhap vao diem ly: ");
	scanf("%d", &ly);
	printf("Nhap vao diem hoa: ");
	scanf("%d", &hoa);

	sum = toan + ly + hoa;

	if (sum >= 15 && toan > 4 && ly > 4 && hoa > 4)
	{
		if (toan > 5 && ly > 5 && hoa > 5)
		{
			printf("Dau!! Hoc deu cac mon");
		}
		else
		{
			printf("Dau!! Hoc chua deu cac mon");
		}
	}
	else
	{
		printf("Thi hong!!");
	}

	getch();
	return 0;
}
