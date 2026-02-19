#include <stdio.h>
#include <math.h>
int main()
{
    int n, count=0,temp,sum=0,rem;
    printf("enter a number");
    scanf("%d",&n);
    temp=n;
    while (n!=0)
    {
       n=n/10;
       count ++;
    }
    n=temp;
    while (n!=0)
    {
        rem=n%10;
        sum=sum+pow(rem,count);
        n=n/10;
    }
    if (sum==temp)
    {
        printf("armstrong");
    }
    else
     {
        printf(" not armstrong");
    }

return 0;
}