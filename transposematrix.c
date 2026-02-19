#include <stdio.h>
void transpose(int matrix[][10], int row, int column);
int main() {
    int row, column, a[10][10];
    int i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &column);
    printf("Enter matrix elements:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < column; j++) {
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    
    transpose(a, row, column);
    return 0;
}

void transpose(int matrix[][10], int row, int column) 
{
    int i, j;
    printf("The transpose of the matrix is:\n");
    for (i = 0; i < column; i++) {
        for (j = 0; j < row; j++) {
            printf("%d ", matrix[j][i]);
        }
        printf("\n");
    }
}

