#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n, m;
	scanf("%d %d", &n, &m);
	int raw[n][m], rev[m][n];
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			scanf("%d", &raw[i][j]);
			rev[j][i] = raw[i][j];
		}
	}
	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			printf("%d ", rev[i][j]);
		}	
		printf("\n");
	}
	return 0;
}