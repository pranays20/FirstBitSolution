#include <stdio.h>

void main() 
{
    for(int k=1;k<=500;k++)
    {
		int n = k
		, t = n, sum = 0, f, d;
    	while (t > 0) 
		{
    	    d = t % 10;
    	    f = 1;
        	for(int i=1;i<=d;i++) 
				f *= i;
        	sum += f;
        	t /= 10;
    	}	
    	if(sum==n)
    		printf("%d is Strong\n",sum);
	}	
}