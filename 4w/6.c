#include <stdio.h>

int count2(int n) {
	int count = 0;
	if (n == 2) {
		count = 1;
		return count;
	}
	while(n > 10) {
		if (n%10 == 2) {
			count++;
		}
		n = n/10;

	}
	if (n == 2) {
		count++;
	}
	return count;
}

int main(void) {

	int L, R, count = 0;
	scanf("%d %d", &L, &R);
	for (int i = L; i <= R; ++i) {
		count += count2(i);
	}
	printf("%d\n", count);
	return 0;
}
