#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    // Variables 
    int lados[3];

    scanf("%d %d %d", &lados[0], &lados[1], &lados[2]);
    // Condicao de existencia 
    if (lados[0] + lados[1] <= lados[2] 
            || lados[0] + lados[2] <= lados[1] 
            || lados[1] + lados[2] <= lados[0]){
        printf("OS LADOS NAO FORMAM UM TRIANGULO\n"); 
    } else {
        if(lados[0] == lados[1] && lados[0] == lados[2]){
            printf("TRIANGULO EQUILÁTERO");
        } else if(lados[0] == lados[1] || lados[0] == lados[2]){
            printf("TRIANGULO ESCALENO");
        } else {
            printf("TRIANGULO ISÓCELES");
        } 
    }
    return 0;
}
