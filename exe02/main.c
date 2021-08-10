#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    //variables
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

    printf("R = %i\n"
           "V = %i\n"
           "T = %i\n"
           "D = %i\n"
           "L = %i\n", rend, velo, tempo, dist, lit);

    return 0;
}
