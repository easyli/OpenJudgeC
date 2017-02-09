/**
 *
 * @authors easyli (disney@yeah.net)
 * @date    2017-02-09 21:30:07
 * @version 1.0.0
 */

#include <stdio.h>

int main(void) {
	int a, b;
	scanf("%d %d", &a, &b);
	if (a >= -1 && a <= 1 && b >= -1 && b <= 1) {
		printf("yes");
	} else {
		printf("no");
	}
	return 0;
}

