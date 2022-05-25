
#include <stdio.h>

int main()
{    
    int n=12345,sum=0,m=0,sum1=0,sum2=0,sum3=0;
    /*m=n/10;    
    sum=sum+m;    
     m=n%10;    
    sum=sum+m;*/  //  for two digits
    m=n%10;
    sum=sum+m; //sum=5
    m=n/10;  //m=1234
    sum1=m%10;  //sum1=4
    sum=sum+sum1;//sum=5+4=9
    m=n/10;
    sum2=m%10;
    sum=sum+sum2;
    m=n/10;
    sum3=m%10;
    sum=sum+sum3;
    sum3=m/10;
    sum=sum+sum3;
    printf("Sum is=%d",sum); //for five digits

    return 0;
}
 