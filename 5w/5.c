#include <stdio.h>

int main(int argc, char const *argv[])
{
	int arr[5][5];
	int found = 0;
	for (int i = 0; i < 5; ++i) {
		scanf("%d %d %d %d %d", &arr[i][0], &arr[i][1], &arr[i][2], &arr[i][3], &arr[i][4]);
	}
	int realMax=0, maxRow=0, maxCol=0;
	for (int i = 0; i < 5; ++i) { 
		int max=0; 
		// printf("in line %d:", i);
		for (int j = 0; j < 5; ++j) { 
			if (arr[i][j] > max) { 
				
				max  = arr[i][j]; 
				maxCol = j; 
			}
		}
		
		int minRow=0;
		int min = arr[0][maxCol]; 
		for (int k = 0; k < 5; ++k) {
			if (arr[k][maxCol] < min) {
				min = arr[k][maxCol];
				minRow = k; 
			}
		}
		
		if (i == minRow) {
			realMax = max;
			maxRow = i;
			found = 1;
			break;
		}
	}
	if (found == 1) {
		printf("%d %d %d\n", maxRow+1, maxCol+1, realMax);
	} else {
		printf("not found\n");
	}
	return 0;
}