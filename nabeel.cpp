#include<stdio.h>
#include<conio.h>

void printNo(int no);
int main(){
	printNo(1);
	getch();
	return 0;
}
void printNo(int a){
	if(a<=10){
		printf("%d\n",a);
		a++;
		printNo (a);
		
	}
}
