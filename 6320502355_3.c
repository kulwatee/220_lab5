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
            while(q%2==0)
                q=q/2;
            while(q%3==0)
                q=q/3;
            while(q%5==0)
                q=q/5;
            if(q==0)
                k++;
        }
        x++;
    }
    printf("%d",x);

}
