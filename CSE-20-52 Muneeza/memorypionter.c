//Writw a program in c to display memory adress of an integer variable(using pointers):

#include<stdio.h>

int main()
{
	int b=10;
	int *p;
	p=&b;
	printf("the memory adress of variable b is %u",p);
}
