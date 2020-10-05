#include <stdio.h>
long long int pegadigito (long long int n){
        int cont = 0;
        if(n==0) 
            return 0;
        if(n%10==7){
            cont++;
            return cont + pegadigito (n/10);
        }
        else
            return pegadigito (n/10);
        }
int main () {
    long long int n, total;
    scanf ("%lld", &n);
    total = pegadigito (n);
    printf ("%d\n", total);
    return 0;
}
