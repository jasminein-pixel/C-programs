//    1
//   121
//  12321
// 1234321
#include <stdio.h>

int main()
{
    int i, j, k, n = 4;

    for (i = 1; i <= n; i++)
    {
        // spaces
        for (j = i; j < n; j++)
        {
            printf(" ");
        }

        // ascending numbers
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }

        // descending numbers
        for (k = i - 1; k >= 1; k--)
        {
            printf("%d", k);
        }

        printf("\n");
    }

    return 0;
}
