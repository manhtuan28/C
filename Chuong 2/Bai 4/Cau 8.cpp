#include <stdio.h>

void ve_hinh(int n, int m){
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			printf("*");
		}
		printf("\n");
	}
}

int main () {
	int n,m;
	printf("Nhap vao m: ");
	scanf("%d", &m);
	printf("Nhap vao n: ");
	scanf("%d", &n);
	
	ve_hinh(n,m);
	
	
	return 0;
}