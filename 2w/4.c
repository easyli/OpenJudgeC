#include <stdio.h>

int main(void)
{
	double a, v;
	scanf("%lf", &a);
	v = 3.14 * (a * a * a) * 4 / 3;
	printf("%.2lf", v);
	return 0;
}