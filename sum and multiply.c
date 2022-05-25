#include <stdio.h>

int main()
{
    int n,i,sum=0,a[100];
    printf("enter no of elements in the array:");
    scanf("%d",&n);
    printf("enter %d elements are:\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i = 0; i < n; i++)
          sum = sum + a[i];
          printf("Sum of the array = %d\n",sum);
    
    //printf("n1=%d",n1);
    
return 0;  
}   