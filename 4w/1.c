#include <stdio.h>

int main(void) {
	long int n;
	scanf("%ld", &n);
	while (n > 1) {
		if (n % 2 == 1) {
			printf("%ld*3+1=", n);
			n = n * 3 + 1;
			printf("%ld\n", n);
		} else {
			printf("%ld/2=", n);
			n = n / 2;
			printf("%ld\n", n);
		}
	}
	printf("End\n");
	return 0;
}