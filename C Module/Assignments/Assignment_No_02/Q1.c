#include <stdio.h>
void main()
 {
    int a,b; char op;
    printf("Enter a b and operator: ");
    scanf("%d %d %c",&a,&b,&op);

    if(op=='+') printf("%d",a+b);
    else if(op=='-') printf("%d",a-b);
    else if(op=='*') printf("%d",a*b);
    else if(op=='/' && b!=0) printf("%d",a/b);
    else if(op=='%' && b!=0) printf("%d",a%b);
    else printf("Invalid!");

}
