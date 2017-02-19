#include <stdio.h>

int main(void) {
	int n, m, max = 0, min = 1000;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &m);
		if (m > max) {
			max = m;
		}
		if (m < min) {
			min = m;
		}
	}
	printf("%d\n", max - min);
	return 0;
}