//Write a program in c to find the length of the string(without using string library):

#include<stdio.h>
int main()
{
	char s[50];
	int i;
	printf("enter the string");
	gets(s);
	i=0;
	while(s[i]!='\0')
	{
		i++;
	}
	
	printf("the length of the entered string =%d",i);
}
