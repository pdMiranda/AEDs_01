#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

#define LIN 3
#define COL 3


void lerArranjo(float A[], int tamanho)
{
    for(int i = 0; i < tamanho; i++){
        printf("\nValor real --> ");
        scanf("%f", &A[i]);
    }
}

void escreverArranjo(float A[], int tamanho)
{
    for(int i = 0; i < tamanho; i++){
        printf("%.2f ", A[i]);
    }
}

float somaArranjo(float A[], int tamanho)
{
    int soma = 0;
    for(int i = 0; i < tamanho; i++){
        soma += A[i];
    }
    return soma;
}


float soma(float v[], int tamanho){

    float resposta;
    if(tamanho == 0) resposta = 0;
    else resposta = v[tamanho - 1] + soma(v, tamanho -1 );

    return resposta;

}

int nVogais(char palavra[])
{
    int vogais = 0;
    int i = 0;
    while(palavra[i] != '\0'){
        palavra[i] = toupper(palavra[i]);
        if(palavra[i] == ('A')|| palavra[i] == ('E')|| palavra[i] == ('I')|| palavra[i] == ('O')||  palavra[i] == ('U')) vogais++;
        i++;
    }
    palavra[i] = '\0';
    return vogais;

}

bool linhasIguais(float a[LIN][COL], float b[LIN][COL])
{
    bool iguais = (LIN == COL);
    int i = 0;
    while(iguais && (i < COL)){
        iguais = (a[0][i] == b[i][0]);
        i++;
    }
    return iguais;
}

int main()
{

    int tamanho = 3;
    float A[tamanho];
    lerArranjo(A, tamanho);
    escreverArranjo(A, tamanho);
    printf("\n%.2f",somaArranjo(A, tamanho));
    printf("\n%.2f",soma(A, tamanho));

    char palavra[30];
    gets(palavra);
    printf("%s", palavra);
    printf("\n%i", nVogais(palavra));

    int a[LIN][COL] = {{1,2,3},{1,2,3},{1,2,3}};
    int b[LIN][COL] = {{1,2,3},{2,2,3},{3,2,3}};

    if(linhasIguais(a,b)) printf("\nIguais");
    else printf("\nNao iguais");

    return 0;
}
