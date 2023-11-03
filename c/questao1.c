#include <stdio.h>
#include <string.h>

int main() {
    char lista1[20][100];
    char lista2[20][100];
    char lista3[40][100];
    int tamanho_lista3 = 0;

    printf("Digite 20 elementos da primeira lista separados por espaço: ");
    char buffer[1000];
    fgets(buffer, sizeof(buffer), stdin);
    char *token = strtok(buffer, " ");
    int i = 0;
    while (token != NULL && i < 20) {
        strcpy(lista1[i], token);
        i++;
        token = strtok(NULL, " ");
    }

    printf("Digite 20 elementos da segunda lista separados por espaço: ");
    fgets(buffer, sizeof(buffer), stdin);
    token = strtok(buffer, " ");
    i = 0;
    while (token != NULL && i < 20) {
        strcpy(lista2[i], token);
        i++;
        token = strtok(NULL, " ");
    }

    for (int j = 0; j < i; j++) {
        int duplicado = 0;
        for (int k = 0; k < tamanho_lista3; k++) {
            if (strcmp(lista1[j], lista3[k]) == 0) {
                duplicado = 1;
                break;
            }
        }
        if (!duplicado) {
            strcpy(lista3[tamanho_lista3], lista1[j]);
            tamanho_lista3++;
        }
    }

    for (int j = 0; j < i; j++) {
        int duplicado = 0;
        for (int k = 0; k < tamanho_lista3; k++) {
            if (strcmp(lista2[j], lista3[k]) == 0) {
                duplicado = 1;
                break;
            }
        }
        if (!duplicado) {
            strcpy(lista3[tamanho_lista3], lista2[j]);
            tamanho_lista3++;
        }
    }

    printf("Lista resultante sem elementos repetidos: ");
    for (int j = 0; j < tamanho_lista3; j++) {
        printf("%s ", lista3[j]);
    }
    printf("\n");

    return 0;
}



