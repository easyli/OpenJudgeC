#include <stdio.h> 
int main(void)
{
     int a;
     short b;
     int c = sizeof(a);
     int d = sizeof(b);
     printf("%d %d",c,d);
     return 0;
}