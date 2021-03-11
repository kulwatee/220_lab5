#include<stdio.h>
int main()
{
    int n,x,k=0;
    scanf("%d",n);
    while(x>=1&&n!=k)
    {
        if(x==1||x%2==0||x%3==0||x%5==0)
            k++;

    }
    printf("%d",x);

}
