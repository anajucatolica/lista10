#include <stdio.h>

int strlen(const char *str) {
int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}
int main() {
    printf("o tamanho da string eh : %d\n", strlen("ana"));
    return 0;
}
