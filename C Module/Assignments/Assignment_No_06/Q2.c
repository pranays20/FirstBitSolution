#include<stdio.h>
void print();
void table();
void sum();
void prime();
void armstrong();
void perfect();
void fact();
void strong();
void palindrome();
void sumFL();

void main()
{
	print();
	table(5);
	sum();
	prime(4);
	armstrong(153);
	perfect(6);
	fact(5);
	strong(145);
	palindrome(121);
	sumFL();
}
void print()
{	
	int i=1;
	while(i<=10)
	{
		printf("%d\n",i);
		i++;
	}
}

void table(int num)
{
	int no=5,i=1;
	printf("\n");
	while(i<=10)
	{
		printf("%d\n",i*no);
		i++;
	}
}

void sum()
{
	int start = 1,end = 8,sum = 0;
	while(start<=end)
	{
		 sum = sum + start;
		 start++;
	}
	printf("\n%d",sum);
	
}

void prime(int no)
{
	int i = 2 , flag = 0;
	while(i<no/2)
	{
		if(no%i==0)
		{
			flag = 1;
			break;
		}
		i++;
	}
	if(flag == 0)
		printf("\n%d is prime",no);
	else
		printf("\n%d is not prime",no);

}

void armstrong(int no)
{
	int n=no,temp;
	int sum=0;
	while(n>0)
	{
		temp = n % 10;
		sum = sum +(temp*temp*temp);
		n /=10;
	}
	if(no == sum)
		printf("\n%d is Armstrong ",no);
	else
		printf("\n%d is not Armstrong",no);
}

void perfect(int no)
{
	int i=1 , sum=0;
	while(i<=no/2)
	{
		if (no%i==0)
			sum = sum +i;
		i++;
	}
	if(no == sum)
		printf("\n%d is perfect",no);
	else
		printf("\n%d is not perfect",no);		
}

void fact(int no)
{
	int i=1 ,sum = 1;
	while(i<=no)
	{
		sum = sum * i;
		i++;
	}
	printf("\nfact is : %d",sum);
}

void strong(int n) 
{
    int t = n, sum = 0, f, d;
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
    	printf("\n%d is Strong",sum);
    else
    	printf("\n%d is Not Strong",sum);
}

void palindrome(int n)
{		
	int temp, rev = 0;
    temp = n;
    while (temp > 0)
	{
        rev = rev * 10 + temp % 10;  
        temp /= 10;
    }
    if (rev == n)
        printf("\n%d is a Palindrome\n", n);
    else
        printf("\n%d is Not a Palindrome\n", n);
}	

void sumFL()
{
	int n = 12349, first, last, temp;
	last = n % 10;
    temp = n;
    while (temp >= 10) 
        temp /= 10;      
    first = temp;
    printf("Sum of first and last digit = %d\n", first + last);
    
}