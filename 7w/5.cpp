#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
char a[10001];
int main()
{
    gets(a);
    int l=strlen(a);
    for(int i=0;i<l;i++)
    {
        if(a[i]=='z')a[i]='a';
        else if(a[i]=='Z')a[i]='A';
        else if((a[i]>='A'&&a[i]<='Z')||(a[i]>='a'&&a[i]<='z'))
        a[i]=a[i]+1;
    }
    puts(a);
    return 0;
}