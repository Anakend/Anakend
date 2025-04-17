#include <stdio.h>

int main() {
    int numero;
    
    printf("Digite o numero desejado: ");
    scanf("%d" , &numero);
    if( numero % 2 == 0 ) {
        printf("é %d par.\n", numero);
       } else {
           printf("é %d ímpar.\n", numero);
       }
       
       return 0;
}
    