#include <stdio.h>

void meu_strcat(char *dest, char *src) {
    int i = 0, j = 0;
    while (dest[i] != '\0') i++;
    while (src[j] != '\0') {
        dest[i++] = src[j++];
    }
    dest[i] = '\0';
}

int main() {
    char a[100] = "hello, ";
    char b[] = "world";
    meu_strcat(a, b);
    printf("concatenado: %s\n", a);
    return 0;
}
