#include<stdio.h>
void main()
{	
	int hr = 2 , min = 30 , sec = 10 ,total;	
	total = (hr * 60) * 60 + (min*60) + sec;
	printf("Total Second is : %d",total);
		
}