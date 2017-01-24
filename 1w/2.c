#include <stdio.h> 
int main(void) 
{ 
    int i,j;
   char a;
   scanf("%c",&a); 
    for(i=1; i<=3; i++) 
    { 
        for(j=1; j<=3-i; j++) 
        { 
            printf(" "); 
        } 
        for(j=3-i+1; j<3+i; j++) 
        { 
            printf("%c",a); 
        } 
        printf("\n"); 
    } 
     
    for(i=3-1; i>=1; i--) 
    { 
        for(j=1; j<=(3-i); j++) 
        { 
            printf(" "); 
        } 
        for(j=3-i+1; j<3+i; j++) 
        { 
            printf("%c",a); 
        } 
        printf("\n"); 
    } 
} 