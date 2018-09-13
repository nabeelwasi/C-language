#include<stdio.h>
#include<conio.h>
#include<string.h>

int main ()
{
   char a[50], b[50];
   	printf("Enter 1st word/sentence:") ;
	 scanf("%s" , &a )  ;
	 
	 
	printf("Enter 2nd word/sentence:") ;
	scanf("%s" , &b)  ;	

  strcat(strcat(a, " ") , b) ;
  printf("\nYour two word/sentence has been combined : %s" ,a ) ;

   getch();
   return(0);
}

