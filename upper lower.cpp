#include<stdio.h>
#include<string.h>
main(){
	char s[5656];
		
	printf("Enter any thing = ");
	gets(s);

	printf("\n your sentence is convert in UPPER CASE \n\n%s " , strupr(s));
	return 0 ;	
}
	
