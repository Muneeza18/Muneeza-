//Write a program in c to swap contents of two integer variable using pointers:

#include<stdio.h>
void swap(int *a,int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
	
}

 int main()
 {
 	int a=20,b=30;
 	swap(&a,&b);
 	printf("%d %d",a,b);
 }
