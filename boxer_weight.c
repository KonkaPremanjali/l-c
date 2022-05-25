#include <stdio.h>

int main()
{
    int weight;
    printf("Enter the boxer weight:");
    scanf("%d",&weight);
    if(weight<115)
    {
        printf("The boxer class is Flyweight");
    }
    else if(weight>=115 && weight<=121)
    {
        printf("The boxer class is bantamweight");
    }
    else if(weight>=122 && weight<=153)
    {
        printf("The boxer class is feathermweight");
    }
     else if(weight>=154 && weight<=189)
    {
        printf("The boxer class is middlemweight");
    }
     else if(weight>=190)
    {
        printf("The boxer class is Heavymweight");
    }
    return 0;
}