#include <stdio.h>

int max3(int a, int b, int c)
{
    int max;
    max = (a >= b && a >= c) ? a : (b >= c) ? b : c;
    return max;
}

int main(){
    printf("%d\n", max3(3, 5, 2) );
}