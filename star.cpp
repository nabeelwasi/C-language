#include <stdio.h>
#define SIZE 7
int main( void )
{
int n[ SIZE ] = { 0, 1, 2, 3, 7, 6, 7 };
size_t i; 
int j;
printf( "%s%13s%7s%1s\n", "number", "Value" , "star");
for ( i = 0; i < SIZE; ++i ) 
{
printf( "%2u%15d ", i, n[ i ]) ;
for ( j = 1; j <= n[ i ]; ++j ) 
{
printf( "%c", '*' );
}
puts( "" );
}
}

