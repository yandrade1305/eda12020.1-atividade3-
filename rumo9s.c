#include <stdio.h>
int somaDigitos (int num){
    if(num==0)
        return 0;
    else 
        return somaDigitos (num/10) + num%10;
}
int grau9 (int num){
    if(num == 9)
        return 1;
    else
        return grau9 (somaDigitos (num)) + 1;
}
int main(){
    char strNum [1001];
    int num;
    scanf("%s", strNum);
    while(strNum[0] != '0' || strNum[1] != '\0'){
        num = 0;
    for (int i=0; strNum[i] != '\0'; i++)
        num += strNum[i] - '0';
        if(num%9 == 0)
            printf("%s is a multiple of 9 and has 9-degree %d.\n", strNum, grau9(num));
        else 
            printf("%s is not a multiple of 9.\n", strNum);
        scanf("%s", strNum);
    }
        return 0;
}
