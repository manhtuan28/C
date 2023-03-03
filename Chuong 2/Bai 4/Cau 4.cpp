#include <stdio.h>

int giaithua(int n) {
	int s = 1;
	if (n == 0) {
		return 1;
	}

	for (int i = 1; i <= n; i++) {
		s *= i;
	}
	return s;
}

int main() {
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);

	printf("N! = %d", giaithua(n));

	return 0;
}