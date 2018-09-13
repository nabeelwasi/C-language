#include <stdio.h>
#include <conio.h>

int main()
{
   int i[100], a, c, n;

   printf("Enter array number\n");
   scanf("%d",&n);

   printf("Enter %d integer(s)\n", n);

   for (c = 0; c < n; c++)
      scanf("%d", &i[c]);

   printf("Enter search number\n");
   scanf("%d", &a);

   for (c=0; c<n; c++){
      if (i[c] == a)
      {
         printf("%d your array number %d.\n", a, c+1);
      }
}
   if (c == n)
   {
      printf("%d is not in array .\n", a);
}

   getch();
   return 0;
}
