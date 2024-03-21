#include<stdio.h>
void rec(int i,int n,int array[n]);
int main()
{
    int n;
    printf("enter number of elements in the array:");
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",(array+i));
    }
    rec(1,n,array);
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(array+i));
    }
    return 0;
}
void rec(int i,int n,int array[n])
{
    if(i==n/2)
    {
        int t=*(array+i-1);
        *(array+i-1)=*(array+n-i);
        *(array+n-i)=t;
    }
    else
    {
        int t=*(array+i-1);
        *(array+i-1)=*(array+n-i);
        *(array+n-i)=t;
        rec(i+1,n,array);
    }}