#include <stdio.h>
void imprime_string (char *s, int n){
    int max;
    max = n;
    if(s[n] == '\0') 
        return;
    if(s[0] == 'x')
        return imprime_string(s[1]) + 'x';
    else{
        imprime_string (s, n + 1);
        printf("%c", s[n]);
    }
}
int main () {
    char s[501];
    scanf (" %s", s);
    imprime_string (s, 0);
    printf("\n");
    return 0;
} 
