#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    
    do {
        int d = x%10;
        printf("%d ", d);
        x /= 10;
    } while ( x>0 );
    printf("\n");
    return 0;
}