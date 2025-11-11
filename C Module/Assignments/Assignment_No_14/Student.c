#include<stdio.h>
struct student{
	int roll;
	char name[20];
	float marks;
}student;

void main()
{
	struct student sarr[5];
		printf(" Enter 5 Students info : ");
	for(int i=0;i<5;i++)
	{
		printf("\n %d Enter roll_no : ",i+1);
		scanf(" %d",&sarr[i].roll);
		printf(" Enter Name :");
		scanf("%s",sarr[i].name);
		printf(" Enter Makrs : ");
		scanf("%f",&sarr[i].marks);		
		printf("\n Student Added..!!\n");
	}
	
	printf("\n Students in given array\n");
	
	for(int i=0;i<5;i++)
	{
		printf("\n Student %d info : \n",i+1);
		printf(" Roll_no : %d\n",sarr[i].roll);
		printf(" Name : %s\n",sarr[i].name);
		printf(" Marks %f\n",sarr[i].marks);		
	}
}