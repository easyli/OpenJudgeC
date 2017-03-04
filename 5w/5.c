#include <stdio.h>

int main(int argc, char const *argv[])
{
	int arr[5][5];
	int found = 0;
	for (int i = 0; i < 5; ++i) {
		scanf("%d %d %d %d %d", &arr[i][0], &arr[i][1], &arr[i][2], &arr[i][3], &arr[i][4]);
	}
	int realMax=0, maxRow=0, maxCol=0;
	for (int i = 0; i < 5; ++i) { // 遍历每行
		int max=0; // 该行中最大的数
		// printf("in line %d:", i);
		for (int j = 0; j < 5; ++j) { // 该行中的每一个数
			if (arr[i][j] > max) { //find the max
				// printf("max num is :%d\n", max);
				max  = arr[i][j]; 
				maxCol = j; // 最大数的列数
			}
		}
		// max num in this row
		// printf("max num is :%d\n", max);
		// 最大数在该列中是不是最小的
		int minRow=0;
		int min = arr[0][maxCol]; //初始最小值设定为该列第一个数
		for (int k = 0; k < 5; ++k) {
			if (arr[k][maxCol] < min) {
				min = arr[k][maxCol];
				minRow = k; // 该列最小值的行数
			}
		}
		// 如果恰好等于该行
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