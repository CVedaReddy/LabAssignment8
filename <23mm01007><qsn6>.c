#include<stdio.h>
#include<string.h>
int main()
{
    int m,n;
    printf("enter len:");
    scanf("%d",&m);
    printf("enter len:");
    scanf("%d",&n);
    char a[m+n+1],b[n];
    printf("enter:");
    gets(a);
    fflush(stdin);
    printf("enter:");
    gets(b);
    strcat(a,b);
    printf("%s",a);
    return 0;
}