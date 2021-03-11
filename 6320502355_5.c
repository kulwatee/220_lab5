#include<stdio.h>
int main()
{
    int a,b,i,j,sum,w,e,max;
    scanf("%d",&a);
    scanf("%d",&b);
    int x[a][a];
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    for(i=0;i<a-b+1;i++)
    {
        for(j=0;j<a-b+1;j++)
        {
           sum=0;
           for(w=i;w<b+i;w++)
           {
               for(e=j;e<b+j;e++)
                sum+=x[w][e];
           }
           if(i==0&&j==0)
            max=sum;
           if(sum>max)
            max=sum;
        }
    }
    printf("%d",max);
}
