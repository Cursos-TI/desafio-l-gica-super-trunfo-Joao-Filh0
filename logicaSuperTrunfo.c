#include <stdio.h>
#include <string.h>

int main() {
    
    char estadoA[50], estadoB[50], codigoA[10], codigoB[10];
    char nomeA[50], nomeB[50];
    float populacaoA, populacaoB, areaA, areaB, pibA, pibB;
    int pontosTuristicosA, pontosTuristicosB;
    int opcao, atributo1, atributo2;


    printf("Cadastro da Carta 1:\n");
    printf("Digite o estado: ");
    scanf("%s", estadoA);
    printf("Digite o código da carta: ");
    scanf("%s", codigoA);
    printf("Digite o nome da cidade: ");
    scanf("%s", nomeA);
    printf("Digite a população: ");
    scanf("%f", &populacaoA);
    printf("Digite a área: ");
    scanf("%f", &areaA);
    printf("Digite o PIB: ");
    scanf("%f", &pibA);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicosA);

    printf("\nCadastro da Carta 2:\n");
    printf("Digite o estado: ");
    scanf("%s", estadoB);
    printf("Digite o código da carta: ");
    scanf("%s", codigoB);
    printf("Digite o nome da cidade: ");
    scanf("%s", nomeB);
    printf("Digite a população: ");
    scanf("%f", &populacaoB);
    printf("Digite a área: ");
    scanf("%f", &areaB);
    printf("Digite o PIB: ");
    scanf("%f", &pibB);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicosB);

    while (1) {


        printf("\nSelecione a opção:\n");
        printf("1. Comparar um único atributo\n");
        printf("2. Comparar dois atributos simultaneamente\n");
        printf("3. Sair\n");
        printf("Digite a sua escolha: ");
        scanf("%d", &opcao);

        if (opcao == 3) {
            printf("Encerrando o programa...\n");
            break;
        }

        switch (opcao) {
            case 1:
                printf("\nEscolha o atributo para comparar:\n");
                printf("1. População\n");
                printf("2. Área\n");
                printf("3. PIB\n");
                printf("4. Pontos Turísticos\n");
                printf("Digite a sua escolha: ");
                scanf("%d", &atributo1);

                printf("\nResultado da comparação:\n");
                switch (atributo1) {
                    case 1:
                        printf("%s\n", (populacaoA > populacaoB)
                                           ? "Vencedora: Cidade A"
                                           : (populacaoA < populacaoB)
                                                 ? "Vencedora: Cidade B"
                                                 : "Empate na população");
                        break;
                    case 2:
                        printf("%s\n", (areaA > areaB)
                                           ? "Vencedora: Cidade A"
                                           : (areaA < areaB)
                                                 ? "Vencedora: Cidade B"
                                                 : "Empate na área");
                        break;
                    case 3:
                        printf("%s\n", (pibA > pibB)
                                           ? "Vencedora: Cidade A"
                                           : (pibA < pibB)
                                                 ? "Vencedora: Cidade B"
                                                 : "Empate no PIB");
                        break;
                    case 4:
                        printf("%s\n", (pontosTuristicosA > pontosTuristicosB)
                                           ? "Vencedora: Cidade A"
                                           : (pontosTuristicosA < pontosTuristicosB)
                                                 ? "Vencedora: Cidade B"
                                                 : "Empate nos pontos turísticos");
                        break;
                    default:
                        printf("Atributo inválido! Tente novamente.\n");
                }
                break;

            case 2:
                printf("\nEscolha o primeiro atributo para comparar:\n");
                printf("1. População\n");
                printf("2. Área\n");
                printf("3. PIB\n");
                printf("4. Pontos Turísticos\n");
                printf("Digite a sua escolha: ");
                scanf("%d", &atributo1);

                printf("\nEscolha o segundo atributo para comparar:\n");
                printf("1. População\n");
                printf("2. Área\n");
                printf("3. PIB\n");
                printf("4. Pontos Turísticos\n");
                printf("Digite a sua escolha: ");
                scanf("%d", &atributo2);

                printf("\nResultado da comparação de dois atributos:\n");
                if ((atributo1 == 1 && atributo2 == 3) || (atributo1 == 3 && atributo2 == 1)) {

                    char *vencedor = (populacaoA > populacaoB && pibA > pibB)
                                         ? nomeA
                                         : (populacaoA < populacaoB && pibA < pibB)
                                               ? nomeB
                                               : "Empate nos critérios escolhidos";
                    printf("Resultado: %s\n", vencedor);
                } else if ((atributo1 == 2 && atributo2 == 4) || (atributo1 == 4 && atributo2 == 2)) {

                    char *vencedor = (areaA > areaB && pontosTuristicosA > pontosTuristicosB)
                                         ? nomeA
                                         : (areaA < areaB && pontosTuristicosA < pontosTuristicosB)
                                               ? nomeB
                                               : "Empate nos critérios escolhidos";
                    printf("Resultado: %s\n", vencedor);
                } else {
                    printf("Comparação de atributos inválida ou não implementada.\n");
                }
                break;

            default:
                printf("Opção inválida! Por favor, escolha uma opção válida.\n");
        }
    }
    return 0;
}

