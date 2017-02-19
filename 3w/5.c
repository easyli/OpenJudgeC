#include <stdio.h>

int main(void) { 
	int a, b;
	char opr;
	scanf("%d %d %c", &a, &b, &opr);
	switch (opr) {
		case '+':
			printf("%d\n", a+b);
			break;
		case '-':
			printf("%d\n", a-b);
			break;
		case '*':
			printf("%d\n", a*b);
			break;
		case '/':
			if (b == 0) {
				printf("Divided by zero!\n");
			} else {
				printf("%d\n", a/b);
			}
			break;
		default:
			printf("Invalid operator!\n");
	}
	return 0;
}