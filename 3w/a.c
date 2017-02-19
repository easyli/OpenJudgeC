#include <stdio.h>

int main(void) {
	int n, dx, dy, x, y;
	double dr, r;
	scanf("%d", &n);
	int result[n];
	scanf("%d %d", &dx, &dy);
	dr = (double)dy/dx;
	for (int i = 1; i < n; ++i)
	{
		scanf("%d %d", &x, &y);
		// printf("%.5lf\n", (double)y/x);
		if (dr - (double)y/x > 0.05) {
			result[i-1] = -1;
		} else if ((double)y/x - dr > 0.05) {
			result[i-1] = 1;
		} else {
			result[i-1] = 0;
		}
	}
	for (int i = 0; i < n-1; ++i)
	{
		if (result[i] == 1) {
			printf("better\n");
		} else if (result[i] == -1) {
			printf("worse\n");
		} else {
			printf("same\n");
		}
	}
	return 0;
}