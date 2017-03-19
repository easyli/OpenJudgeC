#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
#define N 510
char c[N][51];
char ct[N];
int z[N],x=0;
int mi=0x7f,ma,miz,maz;
int main(){
    //freopen("sh.txt","r",stdin);
    while(~scanf("%s",ct)){
        int len=strlen(ct);z[x]=len;
        for(int i=0;i<len;i++)
          c[x][i]=ct[i];
        x++;
    }
    for(int q=0;q<x;q++){
      if(z[q]<mi){
          mi=z[q];
          miz=q;
      }
      if(z[q]>ma){
          ma=z[q];
          maz=q;
      }
	}    
	cout<<c[maz]<<endl;
    cout<<c[miz]<<endl;
    return 0;
}