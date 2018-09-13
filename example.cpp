#include<stdio.h>
#include<conio.h>

int main(){
int num1, num2, key, a, b,total;
float d1,d2, dtotal;

printf("[0] Exit\n[1] Add\n[2] Subtract\n[3] Multiply\n[4] Divide\n");
scanf("%d", &key);

switch(key)
{
case 0:
		break;
	
case 1:
	printf("\nAddition\n");
	printf("Enter first number=");
	scanf("%d" , &a);
	printf("Enter Second number=");
	scanf("%d", &b);
	total=a+b;
	printf("You Answer = %d" ,total);
	break;

case 2:	
	printf("Subtraction\n");
	printf("Enter first number=");
	scanf("%d" , &a);
	printf("Enter Second number=");
	scanf("%d", &b);
	total=a-b;
	printf("You Answer = %d" ,total);
	break;
	
case 3:
	printf("Multiplication\n");
	printf("Enter first number=");
	scanf("%d" , &a);
	printf("Enter Second number=");
	scanf("%d", &b);
	total=a*b;
	printf("You Answer = %d" ,total);
	break;	
	
case 4:
	printf("Division\n");
	printf("Enter first number=");
	scanf("%f" ,&d1);
	printf("Enter Second number=");
	scanf("%f" ,&d2);
	dtotal=d1/d2;
	printf("You answer = %f" , dtotal);
	break;
	
	
default:
	printf("invalid number");
}
getch();
return 0;
}
