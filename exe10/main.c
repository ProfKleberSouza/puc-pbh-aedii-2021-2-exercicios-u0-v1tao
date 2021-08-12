#include <stdio.h>
#define N 10

int main(int argc, char *argv[]){
    // Variables 
    int array_inicial[N];
    
    for(int i = 0; i < N; i++){
        scanf("%d", &array_inicial[N - 1 - i]);
    }
    for(int i = 0; i < N; i++){
        printf("%d\n", array_inicial[i]);
    } 

    return 0;
}
