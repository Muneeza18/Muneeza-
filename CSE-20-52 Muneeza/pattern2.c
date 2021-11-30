//Write a program in c to display the following pattern:
#include<stdio.h>

int main()
{
	int i,j;
	for(i=1;i<=6;i++)
	{
		 for(j=6;j>=i;j--)
		 {
		 	printf("* ");
		 }
		 
		 printf("\n");
	}
}
