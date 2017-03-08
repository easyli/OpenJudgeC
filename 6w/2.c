#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n, sum = 0, ave = 0;
	scanf("%d", &n);
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	printf("%d %.5f\n", sum, (double)sum/n);
	return 0;
}