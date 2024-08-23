#include<stdio.h>
#define P printf

int main()
{
    int a, b, c;

    P("Enter any numbers: ");
    scanf("%d",&a);
    P("Enter any numbers: ");
    scanf("%d",&b);

    P("1) + \n");
    P("2) - \n");
    P("3) * \n");
    P("4) / \n");
    P("5) % \n");

    P("enter choice");
    scanf("%d",&c);

    switch(c)
    {
        case 1:
           P("your value is :%d\n",a+b);
            break;
        case 2:
           P("your value is :%d\n",a-b);
            break;
        case 3:
           P("your value is :%d\n",a*b);
            break;
        case 4:
           P("your value is :%d\n",a/b);
            break;
        case 5:
           P("your value is :%d\n",a%b);
            break;

        default:
            P("Invalid choice\n");
    }
}