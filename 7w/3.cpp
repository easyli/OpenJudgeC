#include<iostream>
#include<cstring>
using namespace std;
int a[10];
char s1[100],s2[100];
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        scanf("%s",s1);
        scanf("%s",s2);
        if (s1[0]=='R') 
          {
              if(s2[0]=='R') a[i]=0;
              if(s2[0]=='S') a[i]=1;
              if(s2[0]=='P') a[i]=2;
          }
          if (s1[0]=='P') 
          {
              if(s2[0]=='R') a[i]=1;
              if(s2[0]=='S') a[i]=2;
              if(s2[0]=='P') a[i]=0;
          }
          if (s1[0]=='S') 
          {
              if(s2[0]=='R') a[i]=2;
              if(s2[0]=='S') a[i]=0;
              if(s2[0]=='P') a[i]=1;
          }
          if(a[i]==1) printf("Player1\n");
          if(a[i]==2) printf("Player2\n");
          if(a[i]==0) printf("Tie\n");
    }
    
    return 0;
}