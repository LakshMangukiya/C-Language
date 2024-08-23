#include<stdio.h>

int main()
{
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);
    
    (a>0)
            ?printf("a is positive")
    :(a==0)
            ?printf("a is nutral")
            :printf("a is negative");
}