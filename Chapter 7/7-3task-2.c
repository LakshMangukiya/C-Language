#include<stdio.h>

int main()
{
    int i,n,multi=1;

    printf("enter any number :");
    scanf("%d",&n);

    for(i=1 ; i<=n ; i++)
    {
        multi*= i;
    }
    printf(" The factorial is : %d ",multi);
}
