#include <stdio.h>
#include <conio.h>
int main()
{
	int  no = 0;
    int  no2 = 0;
    int mul = 0;
    printf ("Enter no one\n");
    scanf ("%d", & no);
    printf("no = %d\n", no);
    printf ("Enter no two\n");
    scanf("%d", & no2);
    mul = no * no2;
    printf("mul = %d", mul);
    getch();
    return 0;
}
