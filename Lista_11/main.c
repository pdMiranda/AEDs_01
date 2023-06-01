#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void trocaArray(int X[], int tamanho)
{
    int aux;
    aux = X[0];
    X[0] = X[tamanho - 1];
    X[tamanho - 1] = aux;
}

void trocarDoisValores(int X[], int tamanho, int valor1, int valor2)
{
    int aux;
    aux = X[valor1 - 1];
    X[valor1 - 1] = X[valor2 -1];
    X[valor2 - 1] = aux;
}

int somaValoresArray(int X[], int tamanho)
{
    int soma = 0;
    for(int i = 0; i < tamanho; i++){
        soma += X[1];
    }
    return soma;
}

float mediaArray(int X[], int tamanho)
{
    int soma = somaValoresArray(X, tamanho);
    float media = (float)soma/X[tamanho-1];
    return media;

}

bool verificarArray(int X[], int tamanho)
{
    bool isValid = true;
    for(int i = 0; i< tamanho; i++){
        if((X[i]> 100)||(X[i]<1)) isValid = false;
    }
    return isValid;
}

int alunosAprovadosArray(int X[], int tamanho)
{
    int aprovados = 0;
    bool isValid = verificarArray(X, tamanho);
    if(isValid){
        for(int i = 0; i < tamanho; i++){
            if(X[i] >= 60) aprovados++;
        }
    }
    return aprovados;
}

int numerosPossitivos(int X[], int tamanho)
{
    int possitivos = 0;
    for(int i = 0; i < tamanho; i++){
        if(X[i]< 0) possitivos++;
    }
    return possitivos;
}


void lerArray(int X[],int tamanho)
{
    for(int i = 0; i < tamanho; i++){
        printf("\nValor Inteiro --> ");
        scanf("%i", &X[i]);
    }
}

void escreveArray(int X[], int tamanho)
{
    for(int i = 0; i < tamanho; i++){
        printf("\nArray[%i] = %i",i, X[i]);
    }
}

int main()
{
    int tamanho = 3;
    int A[tamanho];

    /*
    lerArray(A, tamanho);
    escreveArray(A, tamanho);
    trocaArray(A, tamanho);
    escreveArray(A, tamanho);
    */

    /*
    lerArray(A, tamanho);
    escreveArray(A, tamanho);
    trocarDoisValores(A, tamanho, 1, 3);
    escreveArray(A, tamanho);
    */

    /*
    lerArray(A, tamanho);
    escreveArray(A, tamanho);
    printf("\nA soma dos valores equivale a %i", somaValoresArray(A, tamanho));
    */

    /*
    lerArray(A, tamanho);
    printf("\nA media do Arrey equivale a %.2f", mediaArray(A, tamanho));
    */

    /*
    lerArray(A, tamanho);
    if(verificarArray(A, tamanho)) printf("\nO array e valido");
    else printf("\nO array nao e valido");
    */

    /*
    lerArray(A, tamanho);
    printf("\nO numero de alunos aprovados equivale a %i", alunosAprovadosArray(A, tamanho));
    */

    lerArray(A, tamanho);
    printf("\nA arrey citado possui %i numeros negativos", numerosPossitivos(A, tamanho));

    return 0;
}

