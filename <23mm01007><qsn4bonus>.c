#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    printf("enter the size of the array:");
    scanf("%d", &n);
    int nums[n];
    printf("enter the integers:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", (nums + i));
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (*(nums + i) == *(nums + j))
            {
                printf("%d is the number which occurs more than once in the array.", *(nums + i));
            }
        }
    }
    return 0;
}