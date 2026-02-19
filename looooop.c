#include <stdio.h>
int main()
{	
    int a, b, c = 0, small, large, i,sum =0;

    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);

    if (a <= b) {
        small = a;
        large = b;
    } else {
        small = b;
        large = a;
    }

    for (i = small; i <= large; i++) {
        if (i % 13 == 0) {
            printf("%d\n", i);
            c = c + 1;
             sum += i;
        }
    }

    printf("Total numbers divisible by 13: %d\n", c);
    printf("Sum of numbers divisible by 13: %d\n", sum);
    return 0;
}

