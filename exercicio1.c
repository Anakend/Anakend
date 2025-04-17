#include <stdio.h>
int main() 
{
    int idade;
    
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    if( idade < 12 ){
         printf("você é criança: ");
    } else if ( idade >= 12 && idade <= 17) {
         printf("você é adolescente.\n");
    } else {
        printf("Você é um adulto: ");
    }
    
    return 0;
}

