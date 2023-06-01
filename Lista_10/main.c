#include <stdio.h>
#include <stdlib.h>

int fatorial(int Numero)
{
    int operacao = 1;
    if(Numero > 1){
        operacao = Numero * fatorial(Numero - 1);
    }
    return operacao;
}

float expoencial(float base, int exp)
{
    float operacao = 1 ;
    if(exp > 0){
        operacao = base * expoencial(base, exp - 1 );
    }
    return operacao;
}

int fibo(int Numero)
{
    int nFibo;
    if(Numero > 2){
        nFibo = fibo(Numero - 2) * fibo(Numero - 1);
    }
    else nFibo = Numero;
    return nFibo;
}


int mdc(int a, int b)
{
    int aux;
    int resp;
    if (a < b){
        aux = b;
        b = a;
        a = aux;
    }
    if(a%b == 0){
        resp = b;
    }
    else{
        resp = mdc(b,(a%b));
    }
    return resp;
}

void troca(float* a, float* b)
{
    float aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

void zera(float* a, float* b)
{
    *a = 0;
    *b = 0;
}

int main()
{
    /*
    int Numero;
    printf("\nNumero a ser feito a fatorial --> ");
    scanf("%i", &Numero);
    printf("A fatorial do numero %i equivale a %i",Numero, fatorial(Numero));
    */

    /*
    float base;
    int expoente;
    printf("\nNumero da base --> ");
    scanf("%f",&base);
    printf("\nNumero do expoente --> ");
    scanf("%i",&expoente);
    printf("\nO resultado da operacao equivael a %.2f",expoencial(base, expoente));
    */

    /*
    int Numero;
    printf("\nNumero da sequencia Fibonacci --> ");
    scanf("%i",&Numero);
    printf("\nO numero %i da sequencia equivale a %i", Numero, fibo(Numero));
    */

    /*
    int N1, N2;
    printf("\nEscreva os numeros a ser testado --> ");
    scanf("%i %i", &N1, &N2);
    printf("\nO MDC equivale a %i", mdc(N1,N2));
    */

    /*
    float a, b;
    printf("\nValores a serem trocados --> ");
    scanf("%f %f", &a, &b);
    troca(&a, &b);
    printf("\n%.2f %.2f", a, b);
    */

   /*
    float a, b;
    printf("\nValores a serem zerados --> ");
    scanf("%f %f", &a, &b);
    zera(&a, &b);
    printf("%.2f %.2f", a, b);
    */

   
    return 0;
}
