#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *entrada, *saida;
    int vetor[10], i = 0;
    float media = 0;
    char linha[100];
    entrada = fopen("entrada_q2.txt", "rt");
    if (entrada == NULL){
        printf("Erro ao abrir o arquivo.\n");
    }
    else{
        printf("Arquivo aberto.\n");
    }
    saida = fopen("saida_q2.txt", "wt");
    if (saida == NULL){
        printf("Erro ao abrir o arquivo.\n");
    }
    else{
        printf("Arquivo aberto.\n");
    }

    while(fgets(linha, 10, entrada) !=NULL){
        sscanf(linha, "%i", &vetor[i]);
        media += vetor[i];
        i = i+1;
    }

    int menor = vetor[0], maior = vetor[0];

    for(i = 0; i < 10; i++){
        if (vetor[i] < menor){
            menor = vetor[i];
        }
        if (vetor[i] > maior){
            maior = vetor[i];
        }
    }
    fprintf(saida, "Maior número: %i\n Menor número: %i\n Média = %.2f", maior, menor, media/10);

    return 0;
}