#include <stdio.h>
int total(int a[], int s);  
int present[10],sum; 
int main()
{
    int i;
    for(i = 0; i < 10; i++)
    {
        printf("Enter number of present students for class %d: ", i + 1);
        scanf("%d", &present[i]);
    }
    sum = total(present, 10);   
    printf("Total number of present students is %d\n", sum);
    return 0;
}

int total(int a[], int s)
{
    int i, t = 0;
    for(i = 0; i < 10; i++)
    {
        t += a[i];
    }
    return t;
}

