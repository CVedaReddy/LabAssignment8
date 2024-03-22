#include<stdio.h>
void reverse(int* start,int* end)
{
   if(start>=end)
   {
      return;
   }
   else
   {
      reverse(start+1,end-1);
      int temp=*start;
      *start=*end;
      *end=temp;
   }
}
int main()
{
   int arr[]={10,20,30,15,25};
   int n=sizeof(arr)/sizeof(arr[0]);
   int* start=arr;
   int* end=arr+n-1;
   for(int i=0;i<n;i++)
   {
      printf("%d\t",arr[i]);
   }
   reverse(start,end);
   printf("\nrevesed:\n");
   for(int i=0;i<n;i++)
   {
      printf("%d\t",arr[i]);
   }

}
