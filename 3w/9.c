#include <stdio.h>

int main(void) { 
	int a, n, an = 1;
	scanf("%d %d", &a, &n);
	for (int i = 0; i < n; ++i)
	{
		an *= a;
	}
	printf("%d\n", an);
	return 0;
}