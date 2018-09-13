#include<stdio.h>
#include<conio.h>
int main()
{
	int a=2,b=3,c=5;
	float r;
	printf("we are doing Q");
		r = (-b + sqrt(b * b - 4 * a * c)) / (2 *a);
	//	r=(-b-sqrt( pow ( b,2 ) - 4*a*c))/(2*a) ;
	printf("Answer is %f" , r );
	
	getch();
}
