#include <stdio.h>

double pi = 3.14159;
int main(void)
{
	int h, r, x;
	double v, a;
	scanf("%d%d", &h, &r);
	v = h * r * r * pi;
	x = 20000 / v;
	a = x * v;
	if (a < 20000) x = x + 1;
	printf("%d\n", x);
	return 0;
}