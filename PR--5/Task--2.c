#include<stdio.h>

int main()
{
	int r=0,c=0;
	printf("Enter number of row : ");
	scanf("%d",&r);
	printf("Enter number of column : ");
	scanf("%d",&c);
	
	int i,j,a[i][j],max;
	printf("Enter elements of matrix...\n");
	for(i=0;i<r;i++)
    {
		for(j=0;j<c;j++)
        {
			printf("a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
			if(a[i][j]>max)
            {
				max=a[i][j];
			}
		}
	}
	printf("Maximum number from an array : %d",max);
}