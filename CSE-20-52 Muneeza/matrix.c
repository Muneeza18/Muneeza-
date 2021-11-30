//Write a program in c to input an m*n matrix from the user and display the same(matrix form visualization):

#include<stdio.h>
int main()
{   
    printf("enter the elements of matrix row wise");
	int a[4][4];
	int i,j;
	
	for(j=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			 scanf("%d",&a[i][j]);
		}
	
	}
	for(i=0;i<4;i++)
	{
		 for(j=0;j<4;j++)
		 {
		 	printf("%d\t",a[i][j]);
		 }
		 
		 printf("\n");
	}
}
