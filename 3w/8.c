#include <stdio.h>

int main(void) { 
	int n, dx, dy, dz, x = 0, y = 0, z = 0, sum = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		scanf("%d %d %d", &dx, &dy, &dz);
		x += dx;
		y += dy;
		z += dz;
	}
	printf("%d %d %d %d\n", x, y, z, x + y + z);
	return 0;
}