#include <stdio.h>
int main(){
    int n, count, sum=0;
    printf("Enter the value of n.\n");
    scanf("%d",&n);
    for(count=1;count<=n;++count)
    {
        sum+=count;    
    }
    printf("Sum=%d",sum);
    return 0;
}
