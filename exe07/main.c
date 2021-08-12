#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    // Variables
    int quantidade_num = 0;
    int maior_num      = 0; 
    int menor_num      = 0; 
    int tmp            = 0;
    
    scanf("%d", &quantidade_num);
    // Evitar situacoes em que a quantidade de numero eh < 0 
    if(quantidade_num > 0){
        scanf("%d", &maior_num);
    } 
    
    menor_num = maior_num; 
    for(int i = 0; i < quantidade_num - 1; i++){
        scanf("%d", &tmp);      
         
        if(tmp > maior_num){
            maior_num = tmp; 
        } else if(tmp < menor_num){
            menor_num = tmp; 
        } else {
            continue;
        }
    }
    printf("MENOR = %d\n"
           "MAIOR = %d\n", menor_num, maior_num);
    
    return 0;
} 
