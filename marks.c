#include<stdio.h>
int main()
{
    int total_marks,average_marks,m1,m2,m3,m4,m5;
    printf("enter 5 sub marks:");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    total_marks=m1+m2+m3+m4+m5;
    printf("total_marks=%d\n",total_marks);
    average_marks=total_marks/5;
     printf("average_marks=%d\n",average_marks);
}