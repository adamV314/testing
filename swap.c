#include <stdio.h>

int main(void)
{
    int x = 2;
    int y = 3;
    
    printf("x is %i\n", x);
    printf("y is %i\n", y);
    
    // swapping...
    int bucket = x;
    x = y;
    y = bucket;
    
    printf("x is now %i\n", x);
    printf("y is now %i\n", y);
}
