#include<stdio.h>
void main()
{
	int a,b,c;
    printf("Enter 3 sides: ");
    scanf("%d%d%d",&a,&b,&c);

    if(a==b && b==c) printf("Equilateral");
    else if(a==b || b==c || a==c) printf("Isosceles");
    else printf("Scalene");
}