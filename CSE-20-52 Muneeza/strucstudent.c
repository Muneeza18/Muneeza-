//Write a program in c to create a structure student with fields rollno,name and marks as unit of the structure .Input values for 5 students into the structure
// and display the same:

#include<stdio.h>

struct STUDENT
{
	char name[50];
	int rollno;
	float marks;
	
};

 int main()
{
	int i;
	struct STUDENT s[5];
	
	for(i=0;i<5;i++)
	{
		
		printf("enter your name rollno and marks\n");
		scanf("%s%d%f",&s[i].name,&s[i].rollno,&s[i].marks);
	}
	
	for(i=0;i<5;i++)
	{
		printf("name %s \n rollno %d \n marks %f \n",s[i].name,s[i].rollno,s[i].marks);
	}
}
