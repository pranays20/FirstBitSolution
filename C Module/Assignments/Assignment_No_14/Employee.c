#include<stdio.h>
struct Employee{
	int id;
	char name[20];
	int salary;
}Employee;

void main()
{
	struct Employee sarr[3];
		printf(" Enter 3 Employee info : ");
	for(int i=0;i<3;i++)
	{
		printf("\n %d Enter id : ",i+1);
		scanf(" %d",&sarr[i].id);
		printf(" Enter Name :");
		scanf("%s",sarr[i].name);
		printf(" Enter salary : ");
		scanf("%d",&sarr[i].salary);		
	}
	
	printf("\n Employee in given array\n");
	
	for(int i=0;i<3;i++)
	{
		printf("\n------ Employee %d info ------\n",i+1);
		printf(" ID : %d\n",sarr[i].id);
		printf(" Name : %s\n",sarr[i].name);
		printf(" salary %d\n",sarr[i].salary);		
	}
}