#include<stdio.h>
void shift(int *a,int *b,int *c);
int main()
{
    int x,y,z;
    int *a,*b,*c;
    a=&x;
    b=&y;
    c=&z;
    printf("enter x:");
    scanf("%d",&x);
    printf("enter y:");
    scanf("%d",&y);
    printf("enter z:");
    scanf("%d",&z);
    shift(a,b,c);
    printf("x : %d\n",x);
    printf("y : %d\n",y);
    printf("z : %d\n",z);
    return 0;
}
void shift(int *a,int *b,int *c)
{
    int t=*c;
    *c=*b;
    *b=*a;
    *a=t;
}