#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char name[20];
    int roll;
    float marks;
} student;

int main()
{
    student *s, temp;
    int i, j, n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    s = (student *)malloc(n * sizeof(student));

    if (s == NULL)
    {
        printf("Error allocating memory");
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        printf("Enter name, roll no and marks of student %d: ", i + 1);
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);
    }

    /* Sort by marks (descending), if equal marks sort by roll (ascending) */
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (s[j].marks < s[j + 1].marks ||
               (s[j].marks == s[j + 1].marks && s[j].roll > s[j + 1].roll))
            {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }

    printf("\nSorted records:\n");
    for (i = 0; i < n; i++)
    {
        printf("%s\n%d\n%.2f\n\n", s[i].name, s[i].roll, s[i].marks);
    }

    free(s);
    return 0;
}

