#include <stdio.h>
#include <math.h>

int main(void) {
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);
	if (b*b == 4*a*c) {
		printf("x1=x2=%.5lf\n", (-1*b)/(2*a));
	} else if (b*b > 4 * a * c) {
		printf("x1=%.5lf;x2=%.5lf\n", (-1*b+sqrt(b*b-4*a*c))/(2*a), (-1*b-sqrt(b*b-4*a*c))/(2*a));
	} else {
		double x = -b / (2*a), y = sqrt(4*a*c-b*b) / (2*a);
		if (x == 0) {
			x = -x;
		}
		printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n", x, y, x, y);
	}
	return 0;
}