#include<stdio.h>
#define p printf
#define s scanf

main(){
	int r=0,c=0,r1,c1,r_sum=0,c_sum=0;
	p("Enter number of row : ");
	s("%d",&r);
	p("Enter number of colum : ");
	s("%d",&c);
	int i,j,a[r][c];
		for(i=0;i<r;i++){
			for(j=0;j<c;j++){
				p("a[%d][%d] : ",i,j);
				s("%d",&a[i][j]);
			}
		}
		
	p("Enter number of row\t: ");
	s("%d",&r1);
	p("Elements of row %d\t: ",r1);
	
		for(j=0;j<c;j++){
			p("%d, ",a[r1][j]);
			r_sum+=a[r1][j];
		}
		
	p("\nThe sum of a row %d\t: %d",r1,r_sum);
	p("\nEnter number of colum\t: ");
	s("%d",&c1);
	p("Elements of row %d\t: ",c1);
	
		for(i=0;i<r;i++){
			p("%d, ",a[i][c1]);
			c_sum+=a[i][c1];
		}
		
	p("\nThe sum of a colum %d\t: %d",c1,c_sum);
}