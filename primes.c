#include <stdio.h>
#include <math.h>

int isprime(int p){
    if (p < 2) return 0;
    for (int d=2; d <= (int)sqrt(p); d++){
        if (p % d == 0) return 0;
    }
    return 1;
}

int main(){
    int cpt = 0;
    for (int n=0; n<100000; n++){
        if (isprime(n)){
            cpt++;
        }
    }
    printf("%d\n", cpt);
    return 0;
}