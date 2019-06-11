#include <stdio.h>

int main()
{
    int a[10][10], transpose[10][10], r, c, i, j;
    printf("Enter rows and columns of matrix: ");
    scanf("%d %d", &r, &c);

    // Storing elements of the matrix
    printf("\nEnter elements of matrix:\n");
    for(i=1; i<r+1; i++)
        for(j=1; j<c+1;j++)
        {
            printf("Enter element a%d%d: ",i, j);
            scanf("%d", &a[i][j]);
        }

    // Displaying the matrix a[][] */
    printf("\nEntered Matrix: \n");
    for(i=1; i<r+1; i++)
        for(j=1; j<c+1; j++)
        {
            printf("%d  ", a[i][j]);
            if (j == c)
                printf("\n\n");
        }

    // Finding the transpose of matrix a
    for(i=1; i<r+1; i++)
        for(j=1; j<c+1; j++)
        {
            transpose[j][i] = a[i][j];
        }

    // Displaying the transpose of matrix a
    printf("\nTranspose of Matrix:\n");
    for(i=1; i<c+1; i++)
        for(j=1; j<r+1; j++)
        {
            printf("%d  ",transpose[i][j]);
            if(j==r)
                printf("\n\n");
        }
    return 0;
}
