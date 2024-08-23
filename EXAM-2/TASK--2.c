#include<stdio.h>

int main()
{
    int r,c;

    printf("Enter a: ");
    scanf("%d",&r);

    printf("Enter b: ");
    scanf("%d",&c);

    int a[r][c],large=0;

    for(int i=0;i<r;i++)
  {
        for(int j=0;j<c;j++)
    {
        printf("Enter element a[%d][%d]: ",i+1,j+1);
        scanf("%d",&a[i][j]);

        if(a[r][c]>large)
        {
            a[r][c] = large;
        }
    }
  }
  printf("largest number : %d",large);
}