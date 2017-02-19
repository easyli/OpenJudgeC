#include <stdio.h>

int main(void) { 

	int n, m, sum = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &m);
		sum += m;
	}
	printf("%d %.5lf", sum, (double)sum/n);
	return 0;
}