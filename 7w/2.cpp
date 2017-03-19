 #include<iostream>
 #include<cstdio>
 #include<cstring>
 #include<algorithm>
 using namespace std;
 char s[103000];
 int zj=0,flag=0,t;
 struct node
 {
    int x;//字符出现次数 
    int y;//标号 
    int c;//字符码 
};node a[101],f[101];
int cmp(const node &p,const node &q)
{
    return p.y<q.y;
}
int main()
{
    scanf("%s",s+1);
    int len=strlen(s+1);
    for(int i=1;i<=30;i++)
      a[t].x=0,a[t].y=99;
    for(int i=1;i<=len;i++)
      {
          t=s[i]-96;a[t].x++;
        if(a[t].x==1) a[t].y=i;
      }
    for(int i=1;i<=30;i++)
      if(a[i].x==1) f[++zj].x=a[i].x,f[zj].y=a[i].y,f[zj].c=i,flag=1;
    if(flag==1)
    {
      sort(f+1,f+zj+1,cmp);
      putchar(f[1].c+96);
    }
    else printf("no");
    return 0;
}