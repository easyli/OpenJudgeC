#include <stdio.h>

int main(void) {

	int n, a, b, max = 0, tmp = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		scanf("%d %d", &a, &b);
		if (a>=90&&a<=140&&b>=60&&b<=90) {
			tmp ++;
		} else {
			if (tmp > max) {
				max = tmp;
			}
			tmp = 0;
		}
	}
	if (tmp > max) {
		max = tmp;
	}
	printf("%d\n", max);
	return 0;
}