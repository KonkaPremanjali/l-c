#include <stdio.h>

int main()
{
   int reverse_number=0,n,remainder=0,orgiginal_number;
   printf("enter n value:");
   scanf("%d",&n);
   orgiginal_number=n;
   for(int i=0;n!=0;i++)
    {
        remainder = n % 10;
        reverse_number = reverse_number * 10 + remainder;
        n = n/10;
    }
    printf("Rev=%d",reverse_number);
    if(orgiginal_number==reverse_number)
    {
        printf("\npalindrome");
    }
    else
    {
        printf("\nnot palindrome");
    }
    return 0;
}   //Palindrome