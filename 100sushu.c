#include <stdio.h>

int main()
{
    int x;
    for ( x=1; x<=100; x=x+1){
    int i;
    int isPrime = 1;
    for ( i=2; i<x; i=i+1 ) {
        if ( x % i == 0 ) {
            isPrime = 0;
            break;
        }
    }
    if ( isPrime == 1 ) {
        printf("%d ", x);
    }
    
    }
    return 0;
}