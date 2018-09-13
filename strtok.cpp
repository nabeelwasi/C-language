#include <stdio.h>
#include <string.h>

int main ()
{
	char str[2000];
  char * a;
  gets(str);
  a = strtok (str," ,.-");
  while (a != NULL)
  {
    printf ("%s\n", a );
    a = strtok (NULL, " ,.-");
  }
  return 0;
}
















