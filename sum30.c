#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a, b values:");
	scanf("%d%d",&a,&b);
	if(a==30||b==30)
	{
	    printf("true");
	}
	else  if(a+b==30)
	{
	   printf("true"); 
	}
	else{
	    printf("false"); 
	}
	return 0;
}