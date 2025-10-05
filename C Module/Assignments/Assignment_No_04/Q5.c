#include<stdio.h>
void main()
{
	int no, ch, temp, rev, sum;
	
	printf("Enter a number : ");
	scanf("%d",&no);
	
	printf("\n\tMenu\n");
	printf("\t1. Even or Odd \n");
	printf("\t2. Prime or not \n");
	printf("\t3. Palindrom \n");
	printf("\t4. Positive ,negative or Neutral \n");
	printf("\t5. Reverse a Number\n");
    printf("\t6. Sum of Digits\n");
    printf("\t\nEnter your choice: ");
    scanf("%d", &ch);
    
    if(ch == 1)
    	if(no%2==0) 
    		printf("\n%d is even\n",no);
    	else
    		printf("\n%d is odd\n",no);
   
    else if(ch == 2)
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
			printf("\n%d is prime \n",no);
		else
			printf("\n%d is not prime\n",no);
	}
	
    else if(ch == 3)
    {
        temp = no; rev = 0;
        while(temp > 0) {
            rev = rev*10 + temp%10;
            temp /= 10;
        }
        if(rev == no) printf("\n%d is a Palindrome\n", no);
        else printf("\n%d is Not a Palindrome\n", no);
	}
	
    else if(ch == 4)
	{
        if(no > 0) printf("\n%d is Positive\n", no);
        else if(no < 0) printf("\n%d is Negative\n", no);
        else printf("\nNumber is Zero\n");
	}
    
	else if(ch == 5) {
        temp = no; rev = 0;
        while(temp != 0) {
            rev = rev*10 + temp%10;
            temp /= 10;
        }
        printf("\nReverse of %d = %d\n", no, rev);
    }
    else if(ch == 6) {
        temp = no; sum = 0;
        while(temp != 0) {
            sum += temp%10;
            temp /= 10;
        }
        printf("\nSum of digits of %d = %d\n", no, sum);
    }
    else {
        printf("\nInvalid Choice!\n");
    }
       
}