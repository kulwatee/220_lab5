#include<stdio.h>
int main()
{
    int n,x=1,k=0,i=2,q;
    scanf("%d",n);
    while(x>=1&&n!=k)
    {
        if(x==1)
            k++;
        else
        {
            q=x;
            while(q>1)
            {
                i=2;
                while(q%i!=0)
                    i++;
                q=q/i;
                if(i!=2&&i!=3&&i!=5)
                    break;
            }
            if(i==2||i==3||i==5)
                k++;
        }
        x++;
    }
    printf("%d",x);

}
