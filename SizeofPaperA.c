#include <stdio.h>

int main()
{
    int i,h=1189,w=841,s;
    
    for(i=0;i<9;i++)
    {
        printf("\n A%d = %d x %d", i, h, w);
        s=h;
        h=w;
        w=s/2;
    }
    
    return 0;
}