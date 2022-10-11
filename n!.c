#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int fact = 1;
    int i = 1;
    while ( i <= n ) {
        fact = fact * i;
        i= i+1;
    }
    printf("%d!=%d\n", n, fact);
}