#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n, m;
	scanf("%d %d", &n, &m);
	int pic[n][m], copy[n][m];
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			scanf("%d", &pic[i][j]);
		}
	}
	for (int i = 0; i < m; ++i) {
		copy[0][i] = pic[0][i];
		copy[n-1][i] = pic[n-1][i];
	}
	for (int i = 0; i < n; ++i) {
		copy[i][0] = pic[i][0];
		copy[i][m-1] = pic[i][m-1];
	}
	
	

	for (int i = 1; i < n-1; ++i) {
		for (int j = 1; j < m-1; ++j) {
			double aver = (double)(pic[i][j]+pic[i-1][j]+pic[i+1][j]+pic[i][j-1]+pic[i][j+1])/5;
			// printf("%lf\n", aver);
			// copy[i][j] = (int)
			copy[i][j] = (int)(aver+0.5)>(int)aver?(int)aver+1:(int)aver;
		}
	}
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			printf("%d ", copy[i][j]);
		}	
		printf("\n");
	}
	
	return 0;
}