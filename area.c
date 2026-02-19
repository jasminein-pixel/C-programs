#include<stdio.h>
#include<math.h>
int main()
{
    float s,a,b,c,area;
    printf("Enter the sides of triangle:\n");
    scanf("%f%f%f",&a,&b,&c);
    printf("value of a is %f\n",a);
     printf("value of b id %f",b);
      printf("value of c is %f",c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The area of a triangle is %f",area);
    return 0;
    
}