#include <stdio.h>

#define digits 3
int main()
{
    int ten ,seven[digits]= {},nine[digits]= {},temp1,temp2, count,i,n;
    for(ten=1; ten<1000; ten++)
    {
        count=0;
        temp1=ten;
        temp2=ten;
        do
        {
            seven[count]=temp1%7;
            temp1=temp1/7;
            nine[count]=temp2%9;
            temp2=temp2/9;
            count++;
            if(count>2)          
                break;
        }
        while(temp1!=0||temp2!=0);
        if(nine[2]==seven[0]&&nine[1]==seven[1]&&nine[0]==seven[2])    
        {
            scanf("%d",&n);
            switch(n)
            {
            case 1:
                printf("%d\n",ten);
                break;
            case 2:
                printf("%d%d%d\n",seven[2],seven[1],seven[0]);
                break;
            case 3:
                printf("%d%d%d\n",nine[2],nine[1],nine[0]);
                break;
            }
        }
    }
return 0;
}