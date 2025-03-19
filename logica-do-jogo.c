#include <stdio.h>
#include <string.h>

// Estrutura para representar um país
typedef struct {
    char nome[50];
    int populacao;
    int area;
    int pib;
    int densidade;
} Pais;

// Função para exibir os atributos disponíveis
void exibirAtributos() {
    printf("\nEscolha um atributo:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Densidade Demografica\n");
}

// Função para obter a escolha do usuário, garantindo que seja válida e diferente da anterior
int escolherAtributo(int atributoAnterior) {
    int escolha;
    do {
        exibirAtributos();
        printf("Sua escolha: ");
        scanf("%d", &escolha);
        if (escolha < 1 || escolha > 4 || escolha == atributoAnterior) {
            printf("Escolha invalida. Tente novamente.\n");
        }
    } while (escolha < 1 || escolha > 4 || escolha == atributoAnterior);
    return escolha;
}

// Função para obter o valor do atributo com base na escolha
int obterValorAtributo(Pais p, int atributo) {
    switch (atributo) {
        case 1: return p.populacao;
        case 2: return p.area;
        case 3: return p.pib;
        case 4: return p.densidade;
        default: return 0;
    }
}

// Função para determinar o vencedor da rodada
void determinarVencedor(Pais p1, Pais p2, int atributo1, int atributo2) {
    int valorP1A1 = obterValorAtributo(p1, atributo1);
    int valorP2A1 = obterValorAtributo(p2, atributo1);
    int valorP1A2 = obterValorAtributo(p1, atributo2);
    int valorP2A2 = obterValorAtributo(p2, atributo2);

    // Comparação individual dos atributos (densidade é exceção)
    int pontosP1 = ((atributo1 == 4 ? valorP1A1 < valorP2A1 : valorP1A1 > valorP2A1)) ? 1 : 0;
    int pontosP2 = ((atributo1 == 4 ? valorP2A1 < valorP1A1 : valorP2A1 > valorP1A1)) ? 1 : 0;
    pontosP1 += ((atributo2 == 4 ? valorP1A2 < valorP2A2 : valorP1A2 > valorP2A2)) ? 1 : 0;
    pontosP2 += ((atributo2 == 4 ? valorP2A2 < valorP1A2 : valorP2A2 > valorP1A2)) ? 1 : 0;

    int somaP1 = valorP1A1 + valorP1A2;
    int somaP2 = valorP2A1 + valorP2A2;

    printf("\nResultado:\n");
    printf("%s: %d + %d = %d pontos\n", p1.nome, valorP1A1, valorP1A2, somaP1);
    printf("%s: %d + %d = %d pontos\n", p2.nome, valorP2A1, valorP2A2, somaP2);

    if (somaP1 > somaP2) {
        printf("Vencedor: %s!\n", p1.nome);
    } else if (somaP2 > somaP1) {
        printf("Vencedor: %s!\n", p2.nome);
    } else {
        printf("Empate!\n");
    }
}

int main() {
    // Cartas pré-cadastradas
    Pais pais1 = {"Brasil", 214000000, 8515767, 2000000, 25};
    Pais pais2 = {"Alemanha", 83000000, 357022, 4000000, 233};

    printf("Comparando %s vs %s\n", pais1.nome, pais2.nome);

    // Escolha dos atributos
    int atributo1 = escolherAtributo(0);
    int atributo2 = escolherAtributo(atributo1);

    // Determinação do vencedor
    determinarVencedor(pais1, pais2, atributo1, atributo2);

    return 0;
}
