#include <stdio.h>
#include <conio.h>
#include <string.h>
int main(){
    char a[10],b[10];
    printf("Enter Character that you will see your Word/Sentence in same as next line:");
    gets(a);
    strcpy(b,a);
    printf("\nHere is your word/sentence that you were entered:");
    puts(b);
    getch();
    return 0;
}














