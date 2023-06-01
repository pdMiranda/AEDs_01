#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <math.h>

float soma(float N1, float N2)
{
    float soma = N1 + N2;
    return soma;
}

float perimetro(float lado)
{
    float perimetro = lado * 4;
    return perimetro;
}

float circulo(float raio)
{
    float area = pow(raio,2)*3.14;
    return area;
}

float maior(float V1, float V2)
{
    if(V1 > V2) return V1;
    else return V2;
}

bool par(int numero)
{
    bool par;
    par = (numero%2 == 0);
    return par;
}

bool bissexto(ano)
{
    bool bissexto = ((ano%4 == 0 )&&(ano%100 != 0)||(ano%400 == 0));
    return bissexto;
}

float pesoIdeal(char sexo, float altura)
{
    float pesoIdeal;
    if (sexo ='M') pesoIdeal = (72.7 * altura) - 58;
    else pesoIdeal  = (62.1 * altura) - 44.7;
    return pesoIdeal;
}

int fatorial(int primeiroNumero)
{
    int fatorial = 1;
    for(int i = 1; i < primeiroNumero; primeiroNumero--){
        fatorial *= primeiroNumero;
    }
    return fatorial;
}

float potencia(float base, int expoente)
{
    float aux = base;
    if(expoente > 0){
        for(int i = 1; i < expoente; i++){
            base *= aux;
        }
    }
    else if(expoente < 0){
        for(int i = -1; i > expoente; i--){
            base *= aux;
        }
        base = 1.0/base;
    }
    else base = 1;

    return base;
}

float numeroMaior(float numero, float maior)
{
    while(numero!= 0){
        printf("\nNumero\n[0 para acabar] --> ");
        scanf("%f",&numero);
        if(numero > maior) maior = numero;
    }
    return maior;
}

int main()
{

    float N1, N2;
    printf("\nPrimeiro Numero --> ");
    scanf("%f", &N1);
    printf("\nSegundo Numeor --> ");
    scanf("%f", &N2);
    printf("\nA soma dos valores equivale a %.2f\n", soma(N1, N2));


    float lado;
    printf("\nLado do Quadrado --> ");
    scanf("%f",&lado);
    printf("\nO perimetro do quadrado equivale a %.2f\n", perimetro(lado));


    float raio;
    printf("\nRaio do Circulo --> ");
    scanf("%f", &raio);
    printf("\nA area do circulo equivale a %.2f\n", circulo(raio));


    float V1, V2;
    printf("\nPrimeiro Numero --> ");
    scanf("%f", &V1);
    printf("\nSegundo Numero --> ");
    scanf("%f", &V2);
    printf("\nO maior valor e o %.2f\n", maior(V1, V2));


    int numero;
    printf("\nNumero a ser analizado --> ");
    scanf("%i",&numero);
    if(par(numero))printf("\nO valor e par\n");
    else printf("\nO valor e impar\n");


    int ano;
    printf("\nAno --> ");
    scanf("%i",&ano);
    if(bissexto(ano))printf("\nO ano e bissexto\n");
    else printf("\nO ano e normal\n");


    char sexo;
    float altura;
    do{
        printf("\nSexo\n[M/F] --> ");
        scanf(" %c",&sexo);
        sexo = toupper(sexo);
        if((sexo != 'M')&&(sexo != 'F')) printf("\n\tValor Invalido\n");
    }while((sexo != 'M')&&(sexo != 'F'));
    do{
        printf("\nAltura em Metros --> ");
        scanf("%f",&altura);
        if(altura <= 0) printf("\n\tValor Invalido\n");
    }while(altura <= 0);
    printf("\nO seu peso ideal equivale a %f",pesoIdeal(sexo,altura));


    int primeiroNumero;
    do{
        printf("\nNumero a ser fatoriado --> ");
        scanf("%i",&primeiroNumero);
        if(primeiroNumero < 0) printf("\n\tValor Invalido\n");
    }while(primeiroNumero < 0);
    printf("\nA fatorial do %i equivale a %i",primeiroNumero, fatorial(primeiroNumero));


    int expoente;
    float base;
    printf("\nValor da base --> ");
    scanf("%f", &base);
    printf("\nValor do expoente --> ");
    scanf("%i", &expoente);
    printf("\nO valor da operacao e %.2f",potencia(base, expoente));


    float maior, numero;
    printf("\nNumero\n[0 para acabar] --> ");
    scanf("%f",&numero);
    maior = numero;
    printf("\nO maior numero da sequencia equivale a %.2f",numeroMaior(numero, maior));

    return 0;
}
