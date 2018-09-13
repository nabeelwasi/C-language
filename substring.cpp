#include <stdio.h>
#include <conio.h>

int main( )
{
 int l = 0, i , j; 
    char n[80], w[80];

    printf("Enter 1 string: ");
     gets(n);
     
    printf("Enter 2 string: ");
     gets(w);
    
    for(l = 0; w[l] != '\0'; l++);
    
    for(i = 0, j = 0; n[i] != '\0' && w[j] != '\0'; i++)
    {
        if(n[i] == w[j])
        {
            j++;
        }
        else
        {
            j = 0;
        }
    }

    if(j == l)
        printf("Substring found at position", n-w+1  +1);
    else
        printf("Substring not found");

 	getch();
    return 0;
}




































