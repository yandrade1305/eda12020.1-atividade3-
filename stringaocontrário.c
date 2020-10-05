#include <stdio.h>
char imprime_string (char *s, int n){
    if(s[n] == '\0') 
        return s[n];
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
