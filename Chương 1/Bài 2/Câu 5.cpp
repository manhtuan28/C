#include <stdio.h>
#include <conio.h>

int main()
{
	float toan, ly, hoa;
	float sum;
	printf("Nhap vao diem toan: ");
	scanf("%f", &toan);
	printf("Nhap vao diem ly: ");
	scanf("%f", &ly);
	printf("Nhap vao diem hoa: ");
	scanf("%f", &hoa);

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

	printf("\nDiem trung binh: %g", sum / 3); //them cho dep thoi chu khong can thiet

	getch();
	return 0;
}
