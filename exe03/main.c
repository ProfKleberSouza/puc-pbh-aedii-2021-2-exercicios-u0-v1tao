#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    //variables
    int num = 0;
    
    scanf("%d", &num);

    if(num == 0){
        printf("NUMERO NEUTRO");
    }
    else{
        if(num > 0){
            if(num % 2 == 0)
                printf("NUMERO PAR POSITIVO\n");
            else
                printf("NUMERO IMPAR POSITIVO\n");
        } 
        else{
            if(num % 2 == 0)
                printf("NUMERO PAR NEGATIVO\n");
            else
                printf("NUMERO IMPAR NEGATIVO\n");
        } 
    } 
    return 0;
}
