#include<stdio.h>
void evenOdd();
void pallindrome();
void leapYear();
void vowel();
void vote();
void ulcase();
void total_salary();

void operators();
void sides();
void greaterNo();
void result();
void discount();
void divisible();
void age();

void main()
{
	evenOdd();
	pallindrome();
	leapYear();
	vowel();
	vote();
	ulcase();
	total_salary();
	//operators();
	//sides();
	//greaterNo();
	//result();
	discount();
	divisible(); 
	//age();
}
	void evenOdd()
	{
		int a =22;
		if(a%2==0)
			printf("%d is even number..!",a);
		else
			printf("%d is odd number..!",a);
	}
	
	void pallindrome()
	{
		int num =151;
		if( num % 10 == num / 100) // only for 3 digit number
			printf("\n%d is pallindrome..!",num);
		else
			printf("\n%d is not pallindrome..!",num);
	}
	
	void leapYear()
	{
		int year = 2028;
		if(year%4==0 && year%100!=0 || year%100==0)
			printf("\n%d is leap year...!",year);
		else
			printf("\n%d is not leap year...!",year);
	}
	
	void vowel()
	{
		char ch = 'b'; 
    	if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        	printf("\n%c is a Vowel", ch);
    	else
        	printf("\n%c is a Consonant", ch);
	}
	
	void vote()
	{
		int age = 20; 
    	if (age >= 18)
        	printf("\nEligible to vote.\n");
    	else
       		printf("\nNot eligible to vote.\n");
	}
	
	void ulcase()
	{
		char ch = 'p';
		if (ch >= 'A' && ch <= 'Z') 
        	printf("%c is Uppercase", ch); 
    	else
       	printf("%c is Lowercase", ch);
	}
	
	void total_salary() 
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
	
	//Assignment 02
	
	void operators()
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
	
	void sides()
	{
		int a,b,c;
    	printf("Enter 3 sides: ");
    	scanf("%d%d%d",&a,&b,&c);

    	if(a==b && b==c) printf("Equilateral");
    	else if(a==b || b==c || a==c) printf("Isosceles");
    	else printf("Scalene");
	}
	
	
	void greaterNo() 
	{
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
	
	void result() 
	{
    	int marks;
    	printf("Enter marks: ");
    	scanf("%d",&marks);

    	if(marks > 75)
      		printf("Distinction\n");
    	else if(marks > 65)
        	printf("First Class\n");
    	else if(marks > 55)
        	printf("Second Class\n");
    	else if(marks >= 40)
        	printf("Pass Class\n");
    	else
        	printf("Fail\n");	
	}
	
	void discount()
	{
		float price = 550;          
    	char is_student = 'y';     

    	float discount = 0, final_price;

    	if (is_student == 'y' || is_student == 'Y') 
		{
        	if (price > 500)
            	discount = price * 0.20;
        	else
            	discount = price * 0.10;
    	} 
		else 
		{
			if (price > 600) 
            	discount = price * 0.15;	
			else 
           		discount = 0;
    	}

    	final_price = price - discount;

    	printf("Price: %.2f\n", price);
    	printf("Student: %c\n", is_student);
    	printf("Discount Applied: %.2f\n", discount);
    	printf("Final Price after discount: %.2f\n", final_price);

	}
	
	void divisible() 
	{
    	int number = 15;

    	if (number % 3 == 0 && number % 5 == 0)
        	printf("Divisible by both\n");
    	else if (number % 3 == 0) 
        	printf("Divisible by 3 but not by 5\n");
    	else if (number % 5 == 0) 
        	printf("Divisible by 5 but not by 3\n");
     	else 
        	printf("Divisible by None\n");    
	}
	
	void age() 
	{
    	int age;
    	printf("Enter age: ");
    	scanf("%d",&age);

    	if(age < 12)
        	printf("Child\n");
    	else if(age <= 19)
        	printf("Teenager\n");
    	else if(age <= 59)
        	printf("Adult\n");
    	else
        	printf("Senior\n");
	}

