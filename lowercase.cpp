#include<stdio.h>
#include<string.h>
main(){
	char s[665];
	
	printf("Enter any thing = ");
	gets(s);
		
	printf("\n your sentence is convert in lower case \n\n  %s " , strlwr(s));
	return 0 ;	
}
	
