#include <stdio.h>

struct CartaTrunfo {
    char ESTADO;
    char CODIGO[10];
    char NOME[50];
    int POPULACAO;
    float PIB;
    float AREA;
};

void lerCarta(struct CartaTrunfo *carta){
    printf("\nDigite o estado (uma letra de A até H): ");
    scanf(" %c", &carta->ESTADO); // o espaço antes de %c ignora espaços em branco

    printf("Digite o código da carta: ");
    scanf("%s", carta->CODIGO);

    printf("Digite o nome da cidade: ");
    scanf("%s", carta->NOME);

    printf("Digite a população da cidade: ");
    scanf("%d", &carta->POPULACAO);

    printf("Digite o PIB: ");
    scanf("%f", &carta->PIB);

    printf("Digite a área: ");
    scanf("%f", &carta->AREA);
}

int main() {
    struct CartaTrunfo carta1, carta2;

    printf("Insira os dados da carta 1:\n");
    lerCarta(&carta1);

    printf("\nInsira os dados da carta 2:\n");
    lerCarta(&carta2);

    printf("\n\nDADOS CARTA 1:\n");
    printf("ESTADO: %c\nCODIGO: %s\nNOME: %s\nPOPULACAO: %d\nPIB: %.2f\nAREA: %.2f\n",
        carta1.ESTADO, carta1.CODIGO, carta1.NOME, carta1.POPULACAO, carta1.PIB, carta1.AREA);

    printf("\nDADOS CARTA 2:\n");
    printf("ESTADO: %c\nCODIGO: %s\nNOME: %s\nPOPULACAO: %d\nPIB: %.2f\nAREA: %.2f\n",
        carta2.ESTADO, carta2.CODIGO, carta2.NOME, carta2.POPULACAO, carta2.PIB, carta2.AREA);

    return 0;
}
