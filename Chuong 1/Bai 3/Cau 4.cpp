#include <stdio.h>
#include <math.h>

int main () {
	int n,kt = 0;
	printf("Nhap vao mot so nguyen: ");
	scanf("%d", &n);
	
	if(n < 2){
		printf("%d khong phai so nguyen to", n);
		return 0;
	}
	
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			kt = 1;
		}
	}
	
	if(kt == 1){
		printf("%d khong phai so nguyen to", n);
	}
	else{
		printf("%d la so nguyen to", n);
	}
	
	return 0;
}