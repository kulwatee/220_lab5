#include<stdio.h>
int main()
{
    int n,x=1,k=0,i=2;
    scanf("%d",n);
    while(x>=1&&n!=k)
    {
        if(x==1)
            k++;

        else
        {
            while(x>1)
            {
                while(x%i!=0)
                    i++;
                x=x/i;
                if(i!=2||i!=3||i!=5)
                    break;
                k++;
            }
        }
        x++;



    }
    printf("%d",x);

}
