#include<stdio.h>
int main()
 {
    int n,i,arr[300];
    printf("enter no of elements in the array:");
    scanf("%d",&n);
    printf("enter %d elements are:\n",n);
    for( i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("%d\n",n);
    for(int j=0;j<n;j++)
    {
        printf("%d\n",arr[j]);
    }
    return 0;
 }