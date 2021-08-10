#include <stdio.h>

int main(int argc, char *argv[]) {
    //variables 
    int numl[3];
    int temp = 0; 

    scanf("%d %d %d", &numl[0], &numl[1], &numl[2]);
    //list organizer 
    for(int i = 0; i < 2; i++){
        if(numl[i] > numl[i + 1]){
            temp        = numl[i]; 
            numl[i]     = numl[i + 1];
            numl[i + 1] = temp;
        }
    } 
    if(numl[0] > numl[1]){
    temp    = numl[0];
    numl[0] = numl[1];
    numl[1] = temp;
    } 
    
    printf("MENOR = %i\n"
           "MAIOR = %i\n", numl[0], numl[2]);
    return 0;
}
