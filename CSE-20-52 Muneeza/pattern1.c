//Write a progranm in cto display the following pattern:

#include<stdio.h>

int main()
{
	int i,j;
  
	for(i=1;i<=6;i++)   //rows
	{
	
	 for(j=1;j<=i;j++)  
	 {
	
        	printf("*");
     }
     
     printf("\n");
    }
	
}
