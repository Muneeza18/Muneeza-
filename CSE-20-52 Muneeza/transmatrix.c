//Write a program in c to find transpose of a matrix:

#include<stdio.h>
int main()
{   
    int a[3][3],b[3][3];
    int i,j;
    printf("enter the elements of matrix row wise");
	
	for(j=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			 scanf("%d",&a[i][j]);
		}
	
	}
	for(i=0;i<3;i++)
	{
		 for(j=0;j<3;j++)
		 {
		 	b[j][i]=a[i][j];
		 }
		 
		 
	}
	
	for(j=0;j<3;j++)
	{
		printf("%d\t",b[i][j]);
	}
	printf("\n");
}
