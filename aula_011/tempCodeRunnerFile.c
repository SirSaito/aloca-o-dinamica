#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *v;
    int a = 2;
    v = (int *) calloc(a, sizeof(int));
    if (!v) {
        printf ("** Erro: Memoria Insuficiente **");
        exit;
    }

    return 0;
}
