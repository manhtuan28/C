#include <stdio.h>
#include <math.h>

/*Cong thuc: N_t = N * (1 + r/100)^t

lay dan so ban dau x (1+r/100) mu t len
pow de mu t bang 10 co nghia se la
6tr * pow(1+ r/100) deo chay bai nhu con cac

a dme pow bieu dien la: pow(x,y);
6tr * pow(1+ r/100, t); co nghia la (1 + r/100) mu 10; vi t == 10;

ui doi bai de vai lon
*/



// Khong can chep bai nay vao vo!!!!!!!

int main()
{
	double N = 6000000; // dan so ban dau
	double r = 1.8;		// ty le dan so
	int t = 10;			// so nam

	double N_10 = N * pow(1 + r / 100, t); // pow tinh luy thua

	printf("Dân so cua thành pho sau 10 nam la: %f\n", N_10);

	return 0;
}
