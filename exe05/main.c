#include <stdio.h>

int main(int argc, char *argv[]) {
    //variables 
    int n    = 4; 
    int soma = 0;
    int notas[n];
    
    float media = 0;
    
    scanf("%d %d %d %d", &notas[0], &notas[1], &notas[2], &notas[3]);
   
    for(int i = 0; i < n; i++)
        soma += notas[i];
    
    media = soma / 4.0;
    if(media >= 6)
        printf("NOTA = %.1f (APROVADO)", media);
    else 
        printf("NOTA = %.1f (REPROVADO)", media);
    
    return 0;
}
