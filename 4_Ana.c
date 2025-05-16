#include <stdio.h>

int meu_strcmp(char *str1, char *str2) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) return 0;
        i++;
    }
    return (str1[i] == '\0' && str2[i] == '\0') ? 1 : 0;
}

int main() {
    char a[] = "teste";
    char b[] = "teste";
    printf("comparação: %d\n", meu_strcmp(a, b));
    return 0;
}
