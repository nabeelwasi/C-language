#include <stdio.h>
#include <conio.h>
		
int main()
{
	int i,f,l,m,n,s,a[20];
	printf("enter number\n" );
	scanf("%d", &n);
	
	printf("enter %d element\n",n);
	
	for(i = 0; i < n; i++)
	scanf("%d",&a[i]);
	
	 printf("Enter value to find\n");
		scanf("%d", &s);
	
	f=0;
	l=n-1;
	m=(f+l)/2;
	
	while(f<=l){
		if (a[m]<s)
		f=m+1;
		else if(a[m] == s){
         printf("%d found at location %d.\n", s, m+1);
         break;
      }  
	else
	l=m-1;
	m=(f+l)/2;
}
	if(f<l)
	return 0;


	
}
