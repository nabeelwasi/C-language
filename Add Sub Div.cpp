#include <stdio.h>
#include <conio.h>

int main ()
{
	int no = 2;
	int no2 = 10;
	int sum = 0, sub = 0, mul = 0, div= 1;

	sum = no + no2;
	sub = no - no2;
	mul = no * no2;
	div = no / no2;
	printf("sum = %d\n", sum);
	printf("sub = %d\n", sub);
	printf("mul = %d\n", mul);
	printf("div = %f\n", div);
	getch();
	return 0;
}
