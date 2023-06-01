#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define LIN 3
#define COL 3

void escreverMatriz(int A[LIN][COL])
{
    for(int i = 0; i < LIN; i++){
        for(int j = 0; j < COL; j++){
            printf(" %i ", A[i][j]);
        }
        printf("\n");
    }
}

void copiarMatriz(int A[LIN][COL], int B[LIN][COL])
{
    for(int i = 0; i < LIN; i++ ){
        for(int j = 0; j < COL; j++){
            B[i][j] = A[i][j];
        }
    }
}

bool saoIguais(int A[LIN][COL], int B[LIN][COL])
{
    int i = 0, j = 0;
    bool iguais = true;
    while((i < LIN)&&iguais){
        if(A[i][j] != B[i][j]) iguais = false;
        i++;
        j++;
        if(j == COL) j = 0;
    }
    return iguais;
}

int chaveOcorrencia(int A[LIN][COL], int chave)
{
    int contador = 0;
    for(int i = 0; i < LIN; i++){
        for(int j = 0; j < COL; j++){
            if(A[i][j] == chave) contador++;
        }
    }
    return contador;
}

bool temChave(int A[LIN][COL], int chave)
{
    bool hasChave = false;
    int i = 0;
    int j = 0;
    while((i< LIN)&&!hasChave){
        if(A[i][j] == chave) hasChave = true;
        j++;
        if(j == COL){
            j = 0;
            i++;
        }
    }
    return hasChave;
}

int linhaMaior(int A[LIN][COL])
{
    int linha = 0;
    int maior = A[0][0];
    for(int i = 0; i < LIN; i++){
        for(int j = 0; j < COL; j++){
            if(A[i][j] > maior){
                maior = A[i][j];
                linha = i;
            }
        }
    }
    return linha;
}

float mediaMatriz(int A[LIN][COL])
{
    float soma = 0;
    float total = 0;
    for(int i = 0; i < LIN; i++){
        for(int j = 0; j < COL; j++){
            soma += A[i][j];
            total++;
        }
    }
    float media = (float)soma/total;
    return media;
}

int acimaMedia(int A[LIN][COL])
{
    float media = mediaMatriz(A);
    int contador = 0;
    for(int i = 0; i < LIN; i++){
        for(int j = 0; j < COL; j++){
            if (A[i][j] > media) contador++;
        }
    }
    return contador;
}

float somaDiagonal(int A[LIN][COL])
{
    int soma = 0;
    if(LIN == COL){
        for(int i = 0; i < LIN; i++){
            soma += A[i][i];
        }
    }
    return soma;
}

bool linhaDiagonaisIguais(int A[LIN][COL])
{
    int nIguais = 0;
    bool iguais = false;
    if(LIN == COL){
        for(int i = 0; i < COL; i++){
            if((A[i][i]) == (A[0][i])) nIguais++;
        }
    }
    if(nIguais == LIN) iguais = true;
    return iguais;
}

/*
int maiorValorAcimaDiagonal(int A[LIN][COL])
{
    int maior = 0;
    if(LIN == COL){
        maior = A[0][1];
        for(int i = 0; i < LIN - 1; i++){
            for(int j = 1; j < COL; j++){
                if(i < j){
                    if(maior < A[i][j]) maior = A[i][j];
                }
            }
        }
    }
    return maior;
}
*/

int valorAcima(int A[LIN][COL])
{
    int maior = 0;
    if(LIN == COL){
        maior = A[0][1];
        for(int i = 0; i < LIN - 1; i++){
            for(int j = 1 + i; j < COL; j++){
                if(maior < A[i][j]) maior = A[i][j];
            }
        }
    }
    return maior;
}

int main()
{
    int B[LIN][COL];
    int A[LIN][COL] = {{1,2,3},{1,2,3},{1,2,3}};

    copiarMatriz(A,B);

    escreverMatriz(A);

    if(saoIguais(A, B)) printf("\nSao Iguais");
    else printf("\nNao sao iguais");

    printf("\n%i", chaveOcorrencia(A, 1));

    if(temChave(A, 1)) printf("\nTem a chave");
    else printf("\nNao tem a chave");

    printf("\n%i", linhaMaior(A));

    printf("\n%.2f", mediaMatriz(A));
    printf("\n%i", acimaMedia(A));

    printf("\n%.2f", somaDiagonal(A));

    if(linhaDiagonaisIguais(A)) printf("\nSao Iguais");
    else printf("\nSao Diferentes");

    printf("\n%i", valorAcima(A));
    return 0;
}
