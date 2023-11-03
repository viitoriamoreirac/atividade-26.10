#include <stdio.h>
#include <string.h>

struct Registro {
    char nome[100];
    char endereco[100];
    char telefone[20];
};

int main() {
    struct Registro agenda[10];

    int opcao;

    while (1) {
        printf("\nMenu:\n");
        printf("1 - Cadastrar 10 registros\n");
        printf("2 - Pesquisar um registro pelo nome\n");
        printf("3 - Classificar registros por nome\n");
        printf("4 - Apresentar todos os registros\n");
        printf("5 - Sair\n");

        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            for (int i = 0; i < 10; i++) {
                printf("Registro %d:\n", i + 1);
                printf("Nome: ");
                scanf(" %[^\n]", agenda[i].nome);
                printf("Endereço: ");
                scanf(" %[^\n]", agenda[i].endereco);
                printf("Telefone: ");
                scanf(" %[^\n]", agenda[i].telefone);
            }
        } else if (opcao == 2) {
            char nome[100];
            printf("Digite o nome a ser pesquisado: ");
            scanf(" %[^\n]", nome);
            int encontrado = 0;
            for (int i = 0; i < 10; i++) {
                if (strcmp(agenda[i].nome, nome) == 0) {
                    printf("Registro encontrado:\n");
                    printf("Nome: %s\n", agenda[i].nome);
                    printf("Endereço: %s\n", agenda[i].endereco);
                    printf("Telefone: %s\n", agenda[i].telefone);
                    encontrado = 1;
                    break;
                }
            }
            if (!encontrado) {
                printf("Registro não encontrado.\n");
            }
        } else if (opcao == 3) {
            for (int i = 0; i < 10; i++) {
                for (int j = i + 1; j < 10; j++) {
                    if (strcmp(agenda[i].nome, agenda[j].nome) > 0) {
                        struct Registro temp = agenda[i];
                        agenda[i] = agenda[j];
                        agenda[j] = temp;
                    }
                }
            }
        } else if (opcao == 4) {
            printf("Registros na agenda:\n");
            for (int i = 0; i < 10; i++) {
                printf("Registro %d:\n", i + 1);
                printf("Nome: %s\n", agenda[i].nome);
                printf("Endereço: %s\n", agenda[i].endereco);
                printf("Telefone: %s\n", agenda[i].telefone);
            }
        } else if (opcao == 5) {
            break;
        } else {
            printf("Opção inválida. Tente novamente.\n");
        }
    }

    return 0;
}
