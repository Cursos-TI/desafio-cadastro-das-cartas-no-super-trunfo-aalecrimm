#include <stdio.h>
#include <string.h>

struct CartaSuperTrunfo{
  char estado;
  char codigo[4] // Supondo um comprimento máximo de 3 caracteres +
"
  char cidade[50];
  int populacao;
}; 
void lerCarta(struct CartaSuperTrunfo *carta) {
  printf("\nDigite o estado (uma letra de A a H):");
  scanf("%c, &carta->estado");
  printf("Digite o código da carta:" );
  scanf("%s, carta->codigo");
  printf("Digite o nome da cidade");
  scanf("%s, carta->cidade");
  print("Digite a população da cidade");
  sacnf("&d ", carta->populacao);
}

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    struct CartaSuperTrunfo carta1, carta2;

    printf("Insira os dados da primeira carta:");
    lerCarta(&carta1);

    printf("Insira os dados da segunda carta:");
    lerCarta(&carta2);

    printf("\n\nDados da primeira carta");
    printf("Estado:%c\nCódigo:%s\nCidade:%s\nPopulação: %d\n",carta1.estado,carta1.codigo,carta1.cidade,carta1.populacao);

    printf("\n\nDados da segunda carta");
    printf("Estado:%c\nCódigo:%s\nCidade:%s\nPopulação: %d\n", carta2.estado,carta2.codigo,carta2.cidade,carta2.populacao);
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
