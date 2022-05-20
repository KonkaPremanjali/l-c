#include <stdio.h>

int main()
{
   float hardness_steel,carbon_steel,Tensilestrength_steel;
   printf("enter hardness of the steell=");
   scanf("%f",&hardness_steel);
   printf("enter quantity carbon of the steell=");
   scanf("%f",&carbon_steel);
   printf("enter Tensile strength of the steel=");
   scanf("%f",&Tensilestrength_steel);
   if(hardness_steel>50 && carbon_steel<0.7 && Tensilestrength_steel>5600)
   {
       printf("grade of steel is =10");
   }
   else if(hardness_steel>50 && carbon_steel<0.7)
   {
       printf("grade of steel is =9");
   }
   else if(carbon_steel<0.7 && Tensilestrength_steel>5600)
   {
       printf("grade of steel is =8");
   }
   else if(carbon_steel<0.7 && hardness_steel>50)
   {
       printf("grade of steel is =7");
   }
    else if(hardness_steel>50 || carbon_steel<0.7 || Tensilestrength_steel>5600)
   {
       printf("grade of steel is =6");
   }
   else
   {
       printf("grade of steel is =5");
   }
   
   return 0;
}
