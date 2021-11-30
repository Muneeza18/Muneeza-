//Write a program in c to find factorial of a number using recursion:

#include<stdio.h>
int factorial(int);
int main()
{
	int x,ans;
	printf("enter a number");
	scanf("%d",&x);
	ans=factorial(x);
	printf("the factorial of %d is %d",x,ans);
}
int factorial(int n)
{
	if(n>1)
	       return n*factorial(n-1);
	       
	 else
	     return 1;      
}
