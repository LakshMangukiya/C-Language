#include<stdio.h>

void multiplicationtabel()
{
    int a,b;

    printf("Enter any numbers: ");
    scanf("%d",&b);

    for(a=1;a<=10;a++)
    {
        printf("%d x %d = %d\n",b,a,b*a);
    }
}