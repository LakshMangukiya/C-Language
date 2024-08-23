#include<stdio.h>

int main()
{
    int n,i;
    printf("Enter the number of elements: ");
    scanf("%d",&n);

    int A[n],B[n],C[n];


    printf("-----Array A -----\n");

    for(i=0 ; i<n ; i++)
    {
    printf(" enetr A[%d] :",i);  
    scanf("%d",&A[i]);
    }

    printf("-----Array B -----\n");

    for(i=0 ; i<n ; i++)
    {
    printf(" enetr B[%d] :",i);  
    scanf("%d",&B[i]);
    }

    printf("-----Array C-----\n");

    for(i=0 ; i<n ; i++)
    {
        C[i] = A[i]+B[i];
    printf("total : %d\n",C[i]);
    }
    
}