#include <stdio.h>

int main()
{
    int remainder,reverse_number=0,n=567;
   remainder = n % 10;
    rev = reverse_number * 10 + remainder;
    n /= 10;
    remainder = n % 10;
    reverse_number = reverse_number * 10 + remainder;
    n /= 10;
    remainder = n % 10;
    reverse_number = reverse_number * 10 + remainder;
    n /= 10;
    printf("reverse_number=%d",reverse_number);//reverse of a number
  
return 0;  
}