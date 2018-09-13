#include <stdio.h>
#include <conio.h>

int main ()
{
int no1=0,per;

printf ("Enter Your Persontage \n");
scanf  ("%d", &per);

 if (per>=75)
    {printf ("Grade A+");}

else if (per>=65)
    {printf ("Grade A");}

else if (per>=55)
    {printf ("Grade B");}

else 
    {printf ("Fail");}

 getch ();

 return 0;
}
