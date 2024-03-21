#include <stdio.h>

void rotate(int r, int c, int mat[r][c], int n);
int main()
{
    int r, c, n;
    printf("enter the nunmber of rows:");
    scanf("%d", &r);
    printf("enter the nunmber of columns:");
    scanf("%d", &c);
    int mat[r][c];
    printf("enter the elements of the matrix:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", (*(mat + i) + j));
        }
    }
    printf("enter the number of times to be rotated");
    scanf("%d", &n);
    rotate(r, c, mat, n);
    return 0;
}

void rotate(int r, int c, int mat[r][c], int n)
{
    int a, b;
    if (n % 4 == 0 || n % 4 == 2)
    {
        a = r, b = c;
    }
    else
    {
        a = c, b = r;
    }
    int mat1[a][b];
    if (n % 4 == 0)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                *(*(mat1 + i) + j) = *(*(mat + i) + j);
            }
        }
    }
    else if (n % 4 == 1)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                *(*(mat1 + j) + r-1 - i) = *(*(mat + i) + j);
            }
        }
    }
    else if (n % 4 == 2)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                *(*(mat1 + r-1 - i) + c-1 - j) = *(*(mat + i) + j);
            }
        }
    }
    else
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                *(*(mat1 + c-1 - j) + i) = *(*(mat + i) + j);
            }
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d ", *(*(mat1 + i) + j));
        }
        printf("\n");
    }
}