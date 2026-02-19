#include <stdio.h>
int main()
{
    int i,a=0,b=1,next,n;
    printf("Enter the number of terms in fibo series");
    scanf("d",&n);
    printf("Fibo series\n");
    for (i=1;i<=n;i++)
    {
        printf("%d",a);
        next=a+b;
        a=b;
        b=next;
    }
    return 0;

    }
