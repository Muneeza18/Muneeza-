//Write a program in c to find factorial of a number:

#include<stdio.h>

int main()
{
	int n,i,f=1;
	printf("please enter the number");
	scanf("%d", &n);
	
	for(i=n;i>=1;i--)
	{
		f=f*i;
	}
	
	printf("the factorial is %d",f);
}
