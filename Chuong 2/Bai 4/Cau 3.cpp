#include <stdio.h>
#include <math.h>

float can_bac_hai(float n){
	float tinh;
	
	tinh = sqrt(n);
	
	return tinh;
}

int main () {
	float n;
	float tinh;
	printf(">> Nhap vao n: ");
	scanf("%f", &n);
	
	tinh = can_bac_hai(n);
	
	printf("Can bac hai cua %g la: %g", n, tinh);
	
	
	return 0;
}