#include <stdio.h> 
int main(void)
{
     float a;
     double b;
     int c = sizeof(a);
     int d = sizeof(b);
     printf("%d %d\n",c,d);
     return 0;
}