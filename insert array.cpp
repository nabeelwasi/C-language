#include <stdio.h>
#include <conio.h> 
int main()
{
   int a[100],n,p,v,c;
 
   printf("Enter number of elements in array\n");
   scanf("%d", &n);
 
   printf("Enter %d elements\n", n);
 
   for (c = 0; c < n; c++)
      scanf("%d", &a[c]);
 
   printf("Enter the location where you wish to insert an element\n");
   scanf("%d", &p);
 
   printf("Enter the value to insert\n");
   scanf("%d", &v);
 
   for (c = n; c >= p- 1; c--)
      a[c+1] = a[c];
 
   a[p-1] = v;
       
   printf("Resultant array is\n");
 
   for (c = 0; c <= n; c++)
      printf("%d\n", a[c]);
 
   return 0;

}
