#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char frase[100];

    printf("Digite uma frase: ");
    scanf(" %[^\n]", frase);

    printf("Dicionário de caracteres e seus índices: {");
    for (int i = 0; i < strlen(frase); i++) {
        if (isalpha(frase[i])) {
            printf("'%c': %d", frase[i], i);
            if (i < strlen(frase) - 1) {
                printf(", ");
            }
        }
    }
    printf("}\n");

    return 0;
}

