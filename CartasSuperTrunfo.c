#include <stdio.h>
#include <string.h>
struct CartaTrunfo {
    char ESTADO;
    char CODIGO;
    char NOME;
    int POPULACAO;
    float PIB
    float AREA
    };
void lerCarta(struct CartaTrunfo *carta){
printf("\nDigite o estado (uma letra de A até H):");
scanf("%c", &carta->ESTADO);
printf("digite o código da carta:");
scanf("%s", carta->CODIGO);
printf("Digite o nome da cidade:");
scanf("%s", carta->NOME);
printf("digite a população da cidade: ");
scanf("%d", &carta->POPULACAO);
printf("digite o PIB: ");
scanf("%d", carta->PIB);
printf("digite a área: ");
scanf("%d", carta->AREA);
}
int main() {
    struct CartaTrunfo carta1, carta2;
    printf("insira os dados da carta 1: ");
    lerCarta(&carta1);

    printf("insira os dados da carta 2: ");
    lerCarta(&carta2);

    printf("\n\nDADOS CARTA 1:\n");
    printf("ESTADO: %c\nCODIGO: %s\nNOME %s\nPOPULACAO %d\nPIB %d\nAREA %d\n",
        carta1.ESTADO, carta1.CODIGO, carta1.NOME, carta1.POPULACAO, carta1.PIB, carta1.AREA);

    printf("\nDADOS CARTA 2:\n");
    printf("ESTADO: %c\nCODIGO: %s\nNOME %s\nPOPULACAO %d\nPIB %d\nAREA %d\n",
        carta2.ESTADO, carta2.CODIGO, carta2.NOME, carta2.POPULACAO, carta2.PIB, carta2.AREA);
    return 0
}
