
#include <stdio.h>

int main(void) {
	int M, N, X;
	scanf("%d %d %d", &M, &N, &X);
	int m = 0, n = N;
	while (X > 0) {
		// printf("n = %d\n", n);
		while(m < M) {
			m += n;
			X--;
			if (X==0) {
				break;
			}
		}
		if (m<M) {
			break;
		} else {
			m = M;
		}
		while(m > 0) {
			m-=N;
			if (m < 0) {
				// N = n;
				break;
			} else {
				n++;
			}
			
		}
		m = 0;
		N = n;
		if (X==0) {
			break;
		}
	}
	printf("%d\n", n);
	return 0;
}
