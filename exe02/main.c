#include <stdio.h>

int main() {
    //variaveis
    int tempo = 0;
    int velo  = 0;
    int rend  = 0;
    int dist  = 0;
    int lit   = 0;

    scanf("%i %i %i", &tempo, &velo, &rend);

    if(rend == 0)
        rend = 1;

    //formulas principais
    dist  = velo * tempo;
    lit   = dist / rend;

    printf("R = %i"
           "V = %i"
           "T = %i"
           "D = %i"
           "L = %i\n", rend, velo, tempo, dist, lit);

    return 0;
}