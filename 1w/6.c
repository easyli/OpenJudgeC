#include <stdio.h> 
int main(void)
{
     float a;
     double b;
     int c = sizeof(a);
     int d = sizeof(b);
     printf("%d %d",c,d);
     return 0;
}