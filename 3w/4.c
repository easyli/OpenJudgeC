/**
 *
 * @authors easyli (disney@yeah.net)
 * @date    2017-02-09 21:30:07
 * @version 1.0.0
 */

#include <stdio.h>

int main(void) {
	int n = 0, x = 0, y = 0, a = 0, b = 0, c = 0;
	scanf("%d %d %d", &n, &x, &y);

	    a = y / x;
    b = y % x;
    if (b != 0) {
        a++;
    }
    c = n - a;
    if (c < 0) {
        c = 0;
    }
    printf("%d\n", c);	
	return 0;
}

