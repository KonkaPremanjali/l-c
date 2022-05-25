#include <stdio.h>

int main()
{
   int value,remainder,sum=0,dummy;
   printf("enter the value:");
   scanf("%d",&value);
   dummy=value;
   if(value<=500)
   {
      while(value>0) 
      {
         remainder=value%10;
         sum=sum+(remainder*remainder*remainder);
         value=value/10;
      }
      printf("sum=%d\n",sum);
   }
   
   if(dummy==sum)
   {
       printf("Given number is Armstrong number");
   }
   else
   {
       printf("Given number is not Armstrong number");
   }
   return 0;
}