// 12345
// 1234
// 123
// 12
// 1
#include <stdio.h>

int main()
{
    int i, j;

    for (i = 5; i >= 1; i--)   // Outer loop
    {
        for (j = 1; j <= i; j++)   // Inner loop
        {
            printf("%d", j);
        }
        printf("\n");   // Move to next line
    }

    return 0;
}
