#include <stdio.h>

void meu_strcpy(char *dest, char *src) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

int main() {
    char origem[] = "copia";
    char destino[50];
    meu_strcpy(destino, origem);
    printf("Destino: %s\n", destino);
    return 0;
}
