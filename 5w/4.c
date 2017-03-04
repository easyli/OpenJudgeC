#include <stdio.h>

int main(int argc, char const *argv[])
{
	int L, M;
	scanf("%d %d", &L, &M);
	int area[M][2];
	int trees[L+1];
	for (int i = 0; i < L+1; ++i) {
		trees[i] = 1;
	}
	for (int i = 0; i < M; ++i) {
		scanf("%d %d", &area[i][0], &area[i][1]);
	}
	for (int i = 0; i < M; ++i) {
		for (int j = area[i][0]; j <= area[i][1]; ++j) {
			trees[j] = 0;
		}
	}
	int cnt = 0;
	for (int i = 0; i < L+1; ++i) {
		// printf("%d, ", trees[i]);
		if (trees[i]) {
			cnt++;
		}
	}
	printf("%d\n", cnt);
	return 0;
}