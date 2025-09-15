#include <stdio.h>

void contador() {
    int a = 0;

    static int b = 0;

    a++;
    b++;

    printf("a: %d, b: %d\n", a, b);
}

int main() {
    printf("Primeira chamada:\n");
    contador();

    printf("Segunda chamada:\n");
    contador();

    printf("Terceira chamada:\n");
    contador();

    return 0;
}