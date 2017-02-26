#include <stdio.h>

int main(void) {
	int n, len = 0;
	bool less0 = false, first = true;
	int num[10];
	scanf("%d", &n);
	if (n < 0) {
		less0 = true;
		n = 0-n;
	}
	while(n > 10) {
		num[len] = n % 10;
		n = n / 10;
		len ++;
	}
	num[len] = n;
	if (less0) {
		printf("-");
	}

	for (int i = 0; i < len+1; ++i) {
		if (num[i]!=0 || !first) {
			printf("%d", num[i]);
			first = false;
		}
		
	}
	return 0;
}

