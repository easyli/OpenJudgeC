#include <stdio.h>

unsigned long long arr[1000000];

int pell(int n) {
	for (int i = 0; i < n; ++i)
	{
		if (i <= 1) {
			arr[i] = (i+1)%32767;
		} else {
			arr[i] = (2*arr[i-1] + arr[i-2])%32767;
		}
	}
	return arr[n-1]%32767;
};

int main(int argc, char const *argv[])
{
	int n, m;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		scanf("%d", &m);
		printf("%d\n", pell(m));
	}
	return 0;
}