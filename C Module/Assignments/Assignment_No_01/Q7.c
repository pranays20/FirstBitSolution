#include <stdio.h>
void maiTn()
{
		float basic = 6000, da, ta, hra, total;
    	//printf("Enter the basic salary: ");scanf("%f", &basic);
    	if (basic <= 5000) 
		{
        	da = basic * 0.10;
        	ta = basic * 0.20;
        	hra = basic * 0.25;
    	} 
		else 
		{
        	da = basic * 0.15;
        	ta = basic * 0.25;
        	hra = basic * 0.30;
    	}	
    	total = basic + da + ta + hra;
    	printf("\nTotal Salary = %.2f\n", total);
}