#include <stdio.h>  
  
int main()  
{  
    int amount, count;  
  
    printf("Enter amount\n");  
    scanf("%d", &amount);  
  
    count   = amount / 100;  
    amount = amount - (count*100);  
  
    printf("%d   x 100 = %d\n", count, (count*100));  
  
    count   = amount / 50;  
    amount = amount - (count*50);  
  
    printf("%d   x 50  = %d\n", count, (count*50));  
  
    count   = amount / 10;  
    amount = amount - (count*10);  
  
    printf("%d   x 10  = %d\n", count, (count*10));  
  
    count   = amount / 5;  
    amount = amount - (count*5);  
  
    printf("%d   x 5   = %d\n", count, (count*5));  
  
    count   = amount / 2;  
    amount = amount - (count*2);  
  
    printf("%d   x 2   = %d\n", count, (count*2));  
  
    count   = amount / 1;  
    amount = amount - (count*1);  
  
    printf("%d   x 1   = %d\n", count, (count*1));  
  
    return 0;  
}  