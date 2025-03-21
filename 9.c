#include <stdio.h>

int main() {
    int n, t = 0, digito;
    
    printf("Digite um numero positivo: ");
    scanf("%d", &n);
    
    if (n < 0) {
        printf("Isso nao e um numero positivo.");
        return 0;
    }

    while (n > 0) {
        digito = n % 10;  
        t += digito;       
        n /= 10;           
    }

    printf("Soma dos digitos: %d", t);
    
    return 0;
}