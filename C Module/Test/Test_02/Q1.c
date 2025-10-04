#include<stdio.h>
void main()
{
	int unit = 55;
	if(unit >=1 && unit <=50)
		printf("%d",unit*30);
	else if (unit >=51 && unit <=150)
		printf("%d",unit*40);	
	else
		printf("%d",unit*50);
}