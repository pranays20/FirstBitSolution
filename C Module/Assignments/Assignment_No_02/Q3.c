#include <stdio.h>

void main() {
    int a,b,c;
    printf("Enter 3 numbers: ");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b) 
        if(a>c) printf("\n%d",a); 
        else printf("\n%d",c);
    else 
        if(b>c) printf("\n%d",b); 
        else printf("\n%d",c);
}
