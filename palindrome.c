#include <stdio.h>
int main()
{
    int n, rev=0,temp,rem;
    printf("enter a number");
    scanf("d",&n);
    temp=n;
    while (temp!=0)
    {
        rem=temp%10;
        rev=rev*10+rem;
        temp=temp/10;
    }
    if (rev==n)
    {
        printf("palindrome");
    }
    else 
     {
        printf("%d is a palindrome number",n);

    }
}