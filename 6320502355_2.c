#include<stdio.h>
int main()
{
    int n,i,j,q=0,r=0;
    scanf("%d",&n);

    if(n%2!=0)
    {
        for(i=0; i<n; i++)
        {
            for(j=n; j>0; j--)
            {
                if(j==(n/2)-q+1||j==(n/2)+r+1)
                    printf("*");
                else
                    printf("_");
            }
            printf("\n");
            if(i<n/2)
            {
                q++;
                r++;
            }
            else
            {
                q--;
                r--;
            }
        }
    }
    else
    {
        for(i=0; i<n; i++)
        {
            for(j=0; j<n-1; j++)
            {
                if(j==(n/2)-q-1||j==(n/2)+r-1)
                    printf("*");
                else
                    printf("_");
            }
            printf("\n");
            if(i<(n/2)-1)
            {
                q++;
                r++;
            }
            else if(i>=n/2)
            {
                q--;
                r--;
            }
        }

    }
}

