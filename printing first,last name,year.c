#include<stdio.h>
int main()
{
	char firstname[100],lastname[100];
	int year;
	printf("enter your first name:");
	scanf("%s",&firstname);
	printf("enter your last name:");
	scanf("%s",&lastname);
	printf("enter year:");
	scanf("%d",&year);
	printf("%s %s %d",firstname,lastname,year);
	return 0;
} //printing firstname,lastname,year