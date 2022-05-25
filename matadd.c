#include<stdio.h>

int main()
{
int m,n,i,j,a[m][n],b[m][n],add[m][n];
printf("size of the matrix m and n:"); 
scanf("%d%d",&m,&n);
printf("enter the values in a matrix:");
for(i = 0; i < m; i++)
{
for(j = 0; j < n; j++)
{
scanf("%d",&a[i][j]);
}
}
printf("enter the values in b matrix:");
for(i = 0; i < n; i++)
{
for(j = 0; j < n; j++)
{
scanf("%d",&b[i][j]);
}
}
for(i = 0; i < m; i++)
{
for(j = 0; j < n; j++)
{
add[i][j] = a[i][j]+b[i][j];
}
}
printf("addition of matrix:");
for(i = 0; i < m; i++)
{
for(j = 0; j < n; j++)
printf("%d\n", add[i][j]);
printf("\n");
}
return 0;
}

