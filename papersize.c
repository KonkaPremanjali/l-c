#include <stdio.h>

int main()
{
    int i,height=1189,width=841,sample;
    
    for(i=0;i<9;i++)
    {
        printf("\n A%d = %d x %d", i, height, width);
        sample=height;
        h=width;
        width=sample/2;
    }
    
    return 0;
}