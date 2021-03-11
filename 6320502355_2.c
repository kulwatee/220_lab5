#include<stdio.h>
int main()
{
    int n,i,j,q=0;
    scanf("%d",&n);

    if(n%2!=0)
    {
        for(i=0; i<n; i++)
        {
            for(j=n; j>0; j--)
            {
                if(j==(n/2)-q||j==(n/2)+q)
                {
                    printf("*");
                    break;
                }
                printf("_");
            }
            if(i<n/2)
                q++;
            else
                q--;
        }
    }
    else
    {
        for(i=0; i<n; i++)
        {
            for(j=0; j<n-1; j++)
            {
                if(j==(n/2)-q||j==(n/2)+q)
                {
                    printf("*");
                    break;
                }
                printf("_");
            }
            if(i<(n/2)-1)
                q++;
            else if(i>n/2)
                q--;
        }

    }
}

