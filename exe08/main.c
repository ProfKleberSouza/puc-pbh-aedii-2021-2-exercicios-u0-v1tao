#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]){
    //variables 
    int flag = 1;
    int num  = 0; 

    while(flag){
        scanf("%d", &num);
        
        if(num > 0){ 
            printf("POSTIVO\n");
        } else if(num < 0){
            printf("NEGATIVO\n");
        } else {
            flag = false;
        }
    } 
    return 0;
}
