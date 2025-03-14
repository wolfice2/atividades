#include <stdio.h>

int main(){
    int ano, bis;
    
    scanf("%d" , &ano);

    
    if ((ano % 4 == 0) && (ano % 100 != 0) || (ano % 400 == 0)){
        printf("ano bissexto");
    }else {
        printf("ano normal");
    }
    
    return 0;
}