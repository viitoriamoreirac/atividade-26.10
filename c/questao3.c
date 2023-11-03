#include <stdio.h>

int main() {
    int matriz[15][15];

    printf("Digite 15 elementos para a matriz (15 linhas x 15 colunas) separados por espaço:\n");
    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 15; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    int soma = 0;
    for (int i = 0; i < 15; i++) {
        if (matriz[i][i] % 2 == 0) {
            soma += matriz[i][i];
        }
    }

    printf("Somatório dos elementos pares na diagonal principal: %d\n", soma);

    return 0;
}
