#include<stdio.h>
void multiply(int m,int n,int (*arr1)[n],int p,int q,int (*arr2)[q],int (*result)[q])
{
   int mult[m][q];
   for (int i = 0; i < m; i++) 
   {
        for (int j = 0; j < q; j++) 
        {
            result[i][j] = 0;
            for (int k = 0; k < p; k++) 
            {
               *(*(result+i)+j) += *(*(arr1+i)+k) * *(*(arr2+k)+j);
            }
        }
    }
}
int main()
{
   int row1,col1;
   printf("enter the dimension of the first matrix:");
   scanf("%d%d",&row1,&col1);
   int arr1[row1][col1];
   printf("enter the elements of first matrix:\n");
   for(int i=0;i<row1;i++)
   {
      for(int j=0;j<col1;j++)
      {
         scanf("%d",&arr1[i][j]);
      }
   }
   int row2,col2;
   printf("enter the dimension of the second matrix:");
   scanf("%d%d",&row2,&col2);
   int arr2[row2][col2],prod[row1][col2];
   printf("enter the elements of second matrix:\n");
   for(int i=0;i<row2;i++)
   {
      for(int j=0;j<col2;j++)
      {
         scanf("%d",&arr2[i][j]);
      }
   }
   if (col1!=row2) 
   {
      printf("Matrix multiplication is not possible for given dimension.");
   }
   else
   {
   multiply(row1,col1,arr1,row2,col2,arr2,prod);
   for(int i=0;i<row1;i++)
   {
      for(int j=0;j<col2;j++)
      {
         printf("%d\t",prod[i][j]);
      }
      printf("\n");
   }
   }
}
