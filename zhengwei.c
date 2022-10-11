#include <stdio.h>

int main()
{
    int x;
    
    x = 12345;
    int t=0;
    do {
        int d = x%10;
        t = t*10 +d;
        x = x/10;
    } while ( x>0 );
    printf("x=%d,t=%d\n", x, t);
    x = t;
    do {
        int d = x%10;
        printf("%d ", d);
        x = x/10;
    } while ( x>0 );
    printf("\n");
    return 0;
}