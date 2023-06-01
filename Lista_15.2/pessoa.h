#include <stdlib.h>
#include <stdio.h>
#include "data.h"

typedef struct{
    char* nome;
    Data nascimento;
}Pessoa;

void lerNome(Pessoa X)
{
    char nome [30];
    fflush(stdin);
    printf("\nNome --> ");
    gets(nome);
    X.nome = nome;
}
