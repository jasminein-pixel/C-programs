#include<stdio.h>
main ()
{
    int t;
    printf("enter desired number for conversion of temperature");
    scanf("%d, &t");
    printf("enter 1 to convert f to c, 2 to convert c to f, 3 to convert f to k");
    scanf("%d, &c");
    switch (t)
    {
    case 1: 
        /* code */ printf("%d",  f==(9/5)*c+32);
        break;
    case 2:
        /* code */ printf("%d", k==(f-32)*5/4);
        break;
    case 3:
        /* code */ printf("%d", c==(f-32)*5/9+273.15);
        break;

    default:
        break;
    }

}