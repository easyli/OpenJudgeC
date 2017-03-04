#include <stdio.h>


int apples[10];
int main(int argc, char const *argv[])
{
	int high, cnt = 0;
	for (int i = 0; i < 10; ++i)
	{
		scanf("%d", &apples[i]);
	}
	scanf("%d", &high);
	for (int i = 0; i < 10; ++i)
	{
		if(apples[i]<=(high+30)) {
			cnt++;
		}
	}
	printf("%d\n", cnt);
	return 0;
}