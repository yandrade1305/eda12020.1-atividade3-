#include <stdio.h>
long long int soma (long long int n){

        if(n==0) 
            return 0;
        else
            return n%10 + soma (n/10);
    }

int main () {
    long long int n, total;
    scanf ("%lld", &n);
    total = soma (n);
    printf ("%d\n", total);
    return 0;
}
