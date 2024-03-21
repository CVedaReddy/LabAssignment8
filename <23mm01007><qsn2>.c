#include<stdio.h>
#include<string.h>
void multiply(int m,int  n,int p,int q,int mat[m][n],int mat1[p][q]);
int main()
{
    int m,n,p,q;
    printf("Enter the dimensions of the first matrix (rows columns): ");
    scanf("%d %d",&m,&n);
    int mat[m][n];
    printf("Enter the elements of the first matrix:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    printf("\n");
    printf("Enter the dimensions of the second matrix (rows columns): ");
    scanf("%d %d",&p,&q);
    int mat1[p][q];
    printf("Enter the elements of the second matrix:\n");
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    multiply(m,n,p,q,mat,mat1);
    return 0;
}
void multiply(int m,int  n,int p,int q,int mat[m][n],int mat1[p][q])
{
    if(n==p)
    {
        printf("Resultant matrix after multiplication:\n");
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<q;j++)
            {
                int sum=0;
                for(int k=0;k<n;k++)
                {
                    sum=sum+(mat[i][k]*mat1[k][j]);
                }
                printf("%d ",sum);
            }
            printf("\n");
        }
    }
    else
    {
        printf("matrix multiplication can not be performed between two given matrices");
    }
}