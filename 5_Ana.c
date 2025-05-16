#include <stdio.h>

int meu_strlen(char *str); 

int verifica_palindromo(char *str) {
    int i = 0;
    int j = meu_strlen(str) - 1;
    while (i < j) {
        if (str[i] != str[j]) return 0;
        i++;
        j--;
    }
    return 1;
}

int meu_strlen(char *str) {
    int i = 0;
    while (str[i] != '\0') i++;
    return i;
}

int main() {
    char palavra[] = "radar";
    printf("É palíndromo? %d\n", verifica_palindromo(palavra));
    return 0;
}
