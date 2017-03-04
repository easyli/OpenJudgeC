#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n, age;
	scanf("%d", &n);
	// int patients[n];
	double period[4] = {0,0,0,0};
	for (int i = 0; i < n; ++i)
	{
		// scanf("%d", &patients[i]);
		scanf("%d", &age);
		if (age >= 0 && age <= 18) {
			period[0]++;
		} else if (age >18 && age <=35) {
			period[1]++;
		} else if (age > 35 && age <= 60) {
			period[2]++;
		} else {
			period[3]++;
		}
	}
	for (int i = 0; i < 4; ++i)
	{
		period[i] = (double)period[i]/n;
		printf("%.2lf%%\n", period[i]*100);
	}
	return 0;
}