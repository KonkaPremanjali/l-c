#include<stdio.h>
int main()
{
    int weeks,days,year,temp;
    printf("enter the no of days:");
    scanf("%d",&days);
    year=days/365;
    temp=days%365;
    weeks=temp/7;
    days=temp%7;
    printf("%dyears ",year);
    printf("%dweeks ",weeks);
    printf("%ddays ",days);
    
    
    return 0;
}  
