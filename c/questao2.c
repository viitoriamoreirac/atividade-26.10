#include <stdio.h>
#include <string.h>

int main() {
    char matriz[4][5][100];

    printf("Digite 20 elementos para a matriz (4 linhas x 5 colunas) separados por espaço:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%s", matriz[i][j]);
        }
    }

    printf("Matriz:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%s ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}




