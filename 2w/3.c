#include <stdio.h>

int main(int argc, char const *argv[])
{
	char a;
	int b;
	float c;
	double d;
	scanf("%c\n%d\n%f\n%lf", &a, &b, &c, &d);
	printf("%c %d %.6f %.6lf", a, b, c, d);
	return 0;
}