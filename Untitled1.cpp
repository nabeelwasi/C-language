#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int add (int, int);
int sub (int, int);
int mul (int, int);
float div (float, float);

int main (){
int num1,num2,key,x,y;

printf("add\n[2] subtract\n[3]multiply\n[4 divide\n]");
scanf("%d",&key);

switch(key){
	
case 1:
	printf("Enter first number\n");
	scanf("%d", &num1);
	printf("Enter second number\n");
	scanf("%d", &num2);
	printf("%d", add(num1,num2));
	break;

case 2:
	printf("Enter first number\n");
	scanf("%d", &num1);
	printf("Enter second number\n");
	scanf("%d", &num2);
	printf("%d", sub(num1,num2));
	break;
	
case 3:
	printf("Enter first number\n");
	scanf("%d", &num1);
	printf("Enter second number\n");
	scanf("%d", &num2);
	printf("%d", mul(num1,num2));
	break;	
	
case 4:
	printf("Enter first number\n");
	scanf("%f", &num1);
	printf("Enter second number\n");
	scanf("%f", &num2);
	printf("%f", div(num1,num2));
	break;
default:
	printf("that is not a valid number;");
	break;
}
int add(int x, int y)
{
	int z = x + y
	return z;
}
 
int sub(int a, int b)
{
	int c = a - b
	return c;
}

int mul(int d, int e)
{
	int f = d * e
	return f;
}

int div(int g, int h)
{
	int i = g / h
	return i;
}
}
