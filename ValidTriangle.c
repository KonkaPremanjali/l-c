#include <stdio.h>

int main()
{
   int side1,side2,side3,temp,sum;
   printf("enter three sides of triangle:");
   scanf("%d%d%d",&side1,&side2,&side3);
   
        if(side1>side2 && side1>side3)
            {
                printf("side1 is big");
                temp=side1;
                sum=side2+side3;
            }
        else if(side2>side1 && side2>side3)  
            {
                printf("side2 is big");
                temp=side2;
                sum=side1+side3;
            }
        else
            {
                 printf("side3 is big");
                 temp=side3;
                 sum=side2+side1;
            }
        printf("\nsum=%d",sum);
         printf("\ntemp=%d",temp);
        if(sum>temp)
        {
            printf("\nGiven triangle is valid ");
        }
        else
        {
            printf("\nGiven triangle is Invalid ");
        }
      
    
    return 0;
}