#include<stdio.h>

int main()

{
    int l,h;
    printf("Enter of triangle length: ");
    scanf("%d",&l);
    printf("Enter of triangle hight: ");
    scanf("%d",&h);

    printf("triangle of area :%.2f",(float)(l*h)/2);
}