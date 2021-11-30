//Write a program in c to scan an integer array of size n from the user and display the same:

#include<stdio.h>

int main()
{
	int num,a[100],i;
	printf("enter size of an array\n");
	scanf("%d",&num);
	printf("enter the array\n");
	
	for(i=0;i<num;i++)
	{
		scanf("%d", &a[i]);
	}
	
	for(i=0;i<num;i++)
	{
		printf("%d",&a[i]);
	}
}
