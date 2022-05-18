#include <stdio.h>

int main()
{
    float length,breadth,radius,area_ofrect,peri_ofRect,circum,area_ofcircle;
    printf("enter lenght of rect:");
    scanf("%f",&length);
    printf("enter breadth of rect:");
    scanf("%f",&breadth);
    printf("enter radius of circle:");
    scanf("%f",&radius);
     area_ofrect = length * breadth;   
     peri_ofRect = 2 * (length + breadth); 
     area_ofcircle = 3.14 * radius * radius;  
     circum = 2 * 3.14 * radius;
     printf("area_ofrect=%f\n",area_ofrect);
     printf("peri_ofRect=%f\n",peri_ofRect);
     printf("area_ofcircle=%f\n",area_ofcircle);
     printf("circum=%f\n",circum);
    return 0;
}