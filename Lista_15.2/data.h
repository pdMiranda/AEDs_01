#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

typedef struct{
    int dia;
    int mes;
    int ano;
}Data;

char* dataExt(Data X)
{
    char ext[];
    ext = {"janeiro","fevereiro","marco","abril","maio","junho","julho","agosto","setembro","outubro","novembro","dezembro"};

    return ext[(X.mes - 1)];
}

void lerData(Data X)
{
    printf("\n[dd/mm/aa]");
    scanf("%i/%i/%i", &X.dia, &X.mes, X.ano);
}

bool dataValida(Data X)
{
    bool valido = true;
    if(X.dia < 1 || X.dia > 31) valido = false;
    else if(X.mes < 1 || X.mes > 12) valido = false;

    return valido;
}
