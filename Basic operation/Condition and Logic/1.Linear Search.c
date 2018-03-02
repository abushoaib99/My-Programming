#include<stdio.h>

int main()
{
   int x,i,n;
   printf("Enter the number of elements in array : ");
   scanf("%d",&n);
   int A[n];
   printf("Enter %d integers\n",n);
   for(i=0;i<n;i++)
      scanf("%d",&A[i]);
   printf("Enter the number to search : ");
   scanf("%d",&x);
   for(i=0;i<n;i++)
      if(A[i]==x)
         printf("\nElement %d Found at index %d.\n",x,i+1);
      else
        printf("\nElement not found.\n");
   return 0;
}
