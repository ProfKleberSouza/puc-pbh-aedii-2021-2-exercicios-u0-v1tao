#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 30

struct Aluno{
    char nome[30];
    float media; 
};
struct Aluno alunos[N];
struct Aluno array_suporte;
struct Aluno melhores_alunos[3];

float mediaTurma(int total_alunos){
    float soma_notas = 0;
    float media      = 0; 

    for(int i = 0; i < total_alunos; i++){
        soma_notas += alunos[i].media; 
    }
    media = soma_notas / total_alunos;
    
    return media;
}

void organizarCrescenteAlunos(int total_alunos){
    for(int i = 0; i < total_alunos; i++){
        for(int j = 0; j < total_alunos - 1; j++){
            if(alunos[j].media > alunos[j + 1].media){
                array_suporte = alunos[j + 1];
                alunos[j + 1] = alunos[j];
                alunos[j]     = array_suporte;
            }
        }
    } 
}
void organizarMelhoresAlunosAlphab(int total_alunos){
    for(int i = 0; i < 3; i++){
       melhores_alunos[i] = alunos[total_alunos - 1 - i];
    }
    for(int i = 0; i < 2; i++){
        for(int k = 0; k < 2; k++){
            if(strcmp(melhores_alunos[k].nome, melhores_alunos[k + 1].nome) > 0){
                array_suporte          = melhores_alunos[k + 1];
                melhores_alunos[k + 1] = melhores_alunos[k];
                melhores_alunos[k]     = array_suporte;
            }
        }
    }
}

int main(int argc, char *argv[]){
    // Variables 
    int num_alunos    = 0;
    float media_total = 0; 
    
    scanf("%d", &num_alunos);
    
    for(int i = 0; i < num_alunos; i++){
        scanf("%s %f", alunos[i].nome, &alunos[i].media);
    }
     
    organizarCrescenteAlunos(num_alunos);
    organizarMelhoresAlunosAlphab(num_alunos);
    media_total = mediaTurma(num_alunos); 
    
    printf("NOTA MEDIA = %.1f\n", media_total); 
    for(int i = 0; i < 3; i++){
        printf("%s %.1f\n", melhores_alunos[i].nome, melhores_alunos[i].media);
    } 
    
    return 0;
}
