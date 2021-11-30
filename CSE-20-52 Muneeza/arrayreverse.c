//Write a program in c to display the elements of an integer array in reverse order:

#include<stdio.h>

int main()
{
	int a[9]={10,11,12,13,14,15,16,17,18};
	int i;
	
	for(i=8;i>=0;i--)
	   printf("%d", a[i]);
	   
	   printf("\n");
}
