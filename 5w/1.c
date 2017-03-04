#include <stdio.h>

int main(int argc, char const *argv[])
{
	int N, m, cnt = 0;
	scanf("%d", &N);
	int arr[N];
	for (int i = 0; i < N; ++i)
	{
		scanf("%d", &arr[i]);
	}
	scanf("%d", &m);
	for (int i = 0; i < N; ++i)
	{
		if (arr[i] == m) {
			cnt++;
		}
	}
	printf("%d\n", cnt);
	return 0;
}