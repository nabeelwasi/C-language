#include <stdio.h>
#include <conio.h>
int main()
{
	float  no = 0;
    float  no2 = 0;
    float div = 0;
    printf ("Enter no one\n");
    scanf ("%f", & no);
    printf("no = %f\n", no);
    printf ("Enter no two\n");
    scanf("%f", & no2);
    div = no / no2;
    printf("div = %f", div);
    getch();
    return 0;
}
