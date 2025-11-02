#include <stdio.h>

void armstrong(int *);    
void isPrime();
void perfect(int *);
void strong(int *);
void allOperations(int *);

void main() 
{
    int limit = 500;
    int ch;

    armstrong(&limit);
    isPrime();
    perfect(&limit);
    strong(&limit);

    printf("\n\tMenu\n");
    printf("\t1. Even or Odd \n");
    printf("\t2. Prime or not \n");
    printf("\t3. Palindrome \n");
    printf("\t4. Positive, Negative or Neutral \n");
    printf("\t5. Reverse a Number\n");
    printf("\t6. Sum of Digits\n");

    printf("\t\nEnter your choice: ");
    scanf("%d", &ch);
    allOperations(&ch);
}

void armstrong(int *a) 
{
    printf("\nArmstrong Numbers up to %d:\n", *a);
    for (int k = 0; k <= *a; k++) 
	{
        int no = k, n = no, temp, sum = 0;
        while (n > 0) 
		{
            temp = n % 10;
            sum = sum + (temp * temp * temp);
            n /= 10;
        }
        if (no == sum)
            printf("%d ", k);
    }
    printf("\n");
}

void isPrime() 
{
    printf("\nPrime Numbers up to 500:\n");
    int count = 0;
    for (int k = 2; k <= 500; k++)
	{
        int i = 2, flag = 0;
        while (i <= k / 2) 
		{
            if (k % i == 0) 
			{
                flag = 1;
                break;
            }
            i++;
        }
        if (flag == 0) 
		{
            printf("%d ", k);
            count++;
        }
    }
    printf("\nTotal prime numbers: %d\n", count);
}

void perfect(int *n) 
{
    printf("\nPerfect Numbers up to %d:\n", *n);
    for (int k = 1; k <= *n; k++) 
	{
        int no = k, i = 1, sum = 0;
        while (i <= no / 2) 
		{
            if (no % i == 0)
                sum += i;
            i++;
        }
        if (no == sum)
            printf("%d ", no);
    }
    printf("\n");
}

void strong(int *n) 
{
    printf("\nStrong Numbers up to %d:\n", *n);
    for (int k = 1; k <= *n; k++) 
	{
        int t = k, sum = 0, d, f;
        while (t > 0) 
		{
            d = t % 10;
            f = 1;
            for (int i = 1; i <= d; i++)
                f *= i;
            sum += f;
            t /= 10;
        }
        if (sum == k)
            printf("%d ", k);
    }
    printf("\n");
}

void allOperations(int *ch) 
{
    int no, temp, rev, sum;

    printf("Enter a number: ");
    scanf("%d", &no);
    if (*ch == 1) 
	{
        if (no % 2 == 0)
            printf("\n%d is Even\n", no);
        else
            printf("\n%d is Odd\n", no);
    }
    else if (*ch == 2) 
	{
        int i = 2, flag = 0;
        while (i <= no / 2) 
		{
            if (no % i == 0) 
			{
                flag = 1;
                break;
            }
            i++;
        }
        if (flag == 0)
            printf("\n%d is Prime\n", no);
        else
            printf("\n%d is Not Prime\n", no);
    }

    else if (*ch == 3) 
	{
        temp = no;
        rev = 0;
        while (temp > 0) 
		{
            rev = rev * 10 + temp % 10;
            temp /= 10;
        }
        if (rev == no)
            printf("\n%d is Palindrome\n", no);
        else
            printf("\n%d is Not Palindrome\n", no);
    }

    else if (*ch == 4) 
	{
        if (no > 0)
            printf("\n%d is Positive\n", no);
        else if (no < 0)
            printf("\n%d is Negative\n", no);
        else
            printf("\nNumber is Zero\n");
    }
    else if (*ch == 5) 
	{
        temp = no;
        rev = 0;
        while (temp != 0) 
		{
            rev = rev * 10 + temp % 10;
            temp /= 10;
        }
        printf("\nReverse of %d = %d\n", no, rev);
    }

    else if (*ch == 6) 
	{
        temp = no;
        sum = 0;
        while (temp != 0) 
		{
            sum += temp % 10;
            temp /= 10;
        }
        printf("\nSum of digits of %d = %d\n", no, sum);
    }   
    else 
	{
        printf("\nInvalid Choice!\n");
    }
}

