#include <iostream>
#include <stdlib.h>
#include <malloc.h>

using namespace std;
const int TAM = 3;

struct Retangulo
{
    float base;
    float altura;
};

void leiaRetangulo(Retangulo retangulo[])
{
    float base, altuta;
    for(int i = 0; i < TAM; i++)
    {
        printf("\nValor da base do retangulo --> ");
        scanf("%f",&base);
        printf("\nValor da altura do retangulo --> ");
        scanf("%f",&altuta);
        retangulo[i].altura = altuta;
        retangulo[i].base = base;
    }
}

void escreveRetangulo(Retangulo retangulo[])
{
    for(int i = 0; i < TAM; i++)
    {
        printf("\nRetangulo %i: base = %.2f, altura = %.2f", i, retangulo[i].base, retangulo[i].altura);
    }
}

void leiaRet(Retangulo* ret[])
{
    float base, altura;
    for(int i = 0; i < TAM; i++)
    {
        printf("\nValor da base do retangulo --> ");
        scanf("%f",&base);
        printf("\nValor da altura do retangulo --> ");
        scanf("%f", &altura);
        ret[i] = malloc(sizeof(Retangulo));
        ret[i]->altura = altura;
        ret[i]->base = base;
    }
}

void escreveRet(Retangulo* ret[])
{
    for(int i = 0; i < TAM; i ++)
    {
        printf("\nRetangulo %i: base = %.2f, altura = %.2f", i, ret[i]->base, ret[i]->altura);
    }
}

int main()
{
    /*
    Retangulo retangulo[TAM];
    leiaRetangulo(retangulo);
    escreveRetangulo(retangulo);
    */

    Retangulo* ret[TAM];
    leiaRet(ret);
    escreveRet(ret);
    return 0;
}
