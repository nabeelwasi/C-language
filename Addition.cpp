#include <stdio.h>
#include <conio.h>
int main()
{
	int  no = 0;
    int  no2 = 0;
    int sum = 0;
    printf ("Enter no: one\n");
    scanf ("%d", & no);
    printf("no = %d\n", no);
    printf ("enter no two\n");
    scanf("%d", & no2);
    sum = no + no2;
    printf("sum = %d", sum);
    getch();
    return 0;
}
