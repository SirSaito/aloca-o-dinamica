#include <stdio.h>
#include <stdlib.h>

void vetor(void);
void conteudo(void);

int x, i, u;
int y[100];

int main(){
    printf("\t\tDigite a quantidade de espacos do vetor: \n");
    scanf("%d", &x);
    vetor();
    conteudo();
    return 0;
}

void vetor(void){
    for(i=0; i < x; i++){
    y[i]=i;
}
}

void conteudo(void){
    for(u=0; u < x; u++){
        printf("%d\n", y[u]);
    }
}