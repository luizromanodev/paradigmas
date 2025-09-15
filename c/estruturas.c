#include <stdio.h>
#include <string.h>

struct Livro {
    char titulo[100];
    char autor[100];
    int anoPublicacao;
};

int main() {

    int notas[5] = {10, 8, 9, 7, 10};
    printf("Array de notas: \n");
    printf("Primeira nota: %d\n\n", notas[0]);

    struct Livro livro_favorito;
    strcpy(livro_favorito.titulo, "O Guia do Mochileiro das Galáxias");
    strcpy(livro_favorito.autor, "Douglas Adams");
    livro_favorito.anoPublicacao = 1979;

    printf("Registro do livro favorito:\n");
    printf("Título: %s\n", livro_favorito.titulo);
    printf("Autor: %s\n", livro_favorito.autor);
    printf("Ano de Publicação: %d\n", livro_favorito.anoPublicacao);

    return 0;
}