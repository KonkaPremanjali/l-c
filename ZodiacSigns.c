#include <stdio.h>

int main()
{
    char month,january,February,March,April,May,June,July,August,September,October,November,December;
    int date;
    printf("enter the birth of month and date of your's:");
    scanf("%s%d",&month,&date);
    if((month=December&&date>=22)||(month=january&&date<=19))
    {
        printf("your zodiac sign is: capricorn ");
    }
    else if((month=january&&date>=20)||(month=February&&date<=17))
    {
        printf("your zodiac sign is: Aquarius ");
    }
    else if((month=February&&date>=18)||(month=March&&date<=19))
    {
        printf("your zodiac sign is: Pisces ");
    }
    else if((month=March&&date>=20)||(month=April&&date<=19))
    {
        printf("your zodiac sign is: Aries ");
    }
    else if((month=April&&date>=20)||(month=May&&date<=20))
    {
        printf("your zodiac sign is: Taurus ");
    }
    else if((month=May&&date>=21)||(month=June&&date<=20))
    {
        printf("your zodiac sign is: Gemini ");
    }
    else if((month=June&&date>=21)||(month=July&&date<=22))
    {
        printf("your zodiac sign is: Cancer ");
    }
    else if((month=July&&date>=23)||(month=August&&date<=22))
    {
        printf("your zodiac sign is: Leo ");
    }
    else if((month=August&&date<=23)||(month=September&&date<=22))
    {
        printf("your zodiac sign is: Virgo ");
    }
    else if((month=September&&date<=23)||(month=October&&date<=22))
    {
        printf("your zodiac sign is: Libra ");
    }
    else if((month=October&&date<=22)||(month=November&&date<=21))
    {
        printf("your zodiac sign is: Scrpio ");
    }
    else
    {
        printf("your zodiac sign is: Sagittarious ");
    }

    return 0;
}