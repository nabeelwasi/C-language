#include <stdio.h>
#include <conio.h>
int main()
{
	int  no = 0;
    int  no2 = 0;
    int sub = 0;
    printf ("Enter no one\n");
    scanf ("%d", & no);
    printf("no = %d\n", no);
    printf ("Enter no two\n");
    scanf("%d", & no2);
    sub = no - no2;
    printf("sub = %d", sub);
    getch();
    return 0;
}
