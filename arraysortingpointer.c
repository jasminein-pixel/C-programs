#include <stdio.h>
void sort(float *, int);
int main()
{
    float a[10];
    int i;
    for(i = 0; i < 10; i++)
    {
        printf("Enter the value of element %d\n", i + 1);
        scanf("%f", &a[i]);
    }
    sort(a, 10);   
    printf("\nSorted array:\n");
    for(i = 0; i < 10; i++)
        printf("%f\n", a[i]);
    return 0;
}
void sort(float *a, int s)
{
    int i, j;
    float t;
    for(i = 1; i < s; i++)
    {
        for(j = 0; j < s - i; j++)
        {
            if(a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
}

