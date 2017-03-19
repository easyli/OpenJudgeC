#include <iostream>
#include <cstring>
using namespace std;
char a[1000];
int main(int argc, char const *argv[]){
  unsigned int i,count=0;
  gets(a); 
  for(i=0;i<=strlen(a)-1;i++) 
  if(a[i]>='0'&&a[i]<='9') 
  count++; 
  printf("%d",count);
  return 0;
}