#include <stdio.h>
#include <string.h>
#include <conio.h>
int main()
{
     char s1[20];
     char s2[20];
     printf("Enter Your 1st Character:", s1);
     scanf("%s", s1);
     printf("Enter Your 2nd Character:", s2);
     scanf("%s", s2);
     if (strcmp(s1, s2) ==0)
     {
        printf("1st Character and 2nd Character are same");
     }else
      {
         printf("1st Character and 2nd Character aren't same'");
      }
     getch();
	 return 0;
}

