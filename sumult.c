// sumult.c

#include <stdio.h>

void sumult(int *x, int *y, int *s, int *m)
{
    *s = *x + *y;
    *m = (*x) * (*y);
}

int main()
{
    int a = 3;
    int b = 4;
    int add, mult; 
    sumult(&a, &b, &add, &mult);
    printf("%d + %d = %d\n", a, b, add);
    printf("%d x %d = %d\n", a, b, mult);
    return 0;
}