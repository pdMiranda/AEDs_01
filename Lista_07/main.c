#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{

    bool ERRO, isDiv;
    int Numero, Div = 0;
    printf("\n\tQuestao 1\n");
    printf("\n\tIdentificar se o numero e primo");
    do{
        printf("\nNumero que sera verificado --> ");
        scanf("%i",&Numero);
        ERRO = (Numero <= 1);
        if(ERRO) printf("\n\tValor Invalido\n");
    }while(ERRO);
    for(int i = 2;i<= Numero;i++){
        isDiv = (Numero%i == 0);
        if(isDiv) Div++;
    }
    if(Div   == 1)printf("\nO valor e primo");
    else printf("\nO valor nao e primo");


    /*
    int Soma = 0;
    float Numero;
    bool ERRO, isDiv;
    printf("\n\tQuestao 2");
    printf("\n\tIdentificar se um numero inteiro positivo e perfeito");
    do{
        printf("\nDigit o valor --> ");
        scanf("%f", &Numero);
        ERRO = (!((int)Numero == Numero) || (Numero <= 0));
        if(ERRO) printf("\n\tValor Invalido");
    }while(ERRO);
    for(int i = 1; i < Numero; i++){
        isDiv = ((int)Numero%i == 0);
        if(isDiv) Soma += i;
    }
    if(Soma == Numero) printf("\nO numero e perfeito");
    else printf("\nO numero NAO e perfeito");
    */

    /*
    int N, Nota,Maior,aux, Menor,Igual60 = 0;
    float Media = 0;
    bool ERRO;

    printf("\n\tQuestao 3");
    printf("\n\tNotas da sala\n");
    do{
        printf("\nNumero de Alunos --> ");
        scanf("%i",&N);
        ERRO = N < 0;
        if(ERRO) printf("\n\tValor Invalido\n");
    }while(ERRO);
    aux = N;
    while(N>0){
        do{
            printf("\nNota do Aluno --> ");
            scanf("%i",&Nota);
            ERRO = (Nota < 0)||(Nota > 20);
            if(ERRO) printf("\n\tValorInvalido\n");
        }while(ERRO);
        Nota = Maior = Menor;
        if(Nota > 12) Igual60;
        Media += Nota;
        N--;
        while(N>0){
            do{
                printf("\nNota do Aluno --> ");
                scanf("%i",&Nota);
                ERRO = (Nota < 0)||(Nota > 20);
                if(ERRO) printf("\n\tValorInvalido\n");
            }while(ERRO);
            if (Nota > Maior) Maior = Nota;
            else if (Nota < Menor) Menor = Nota;
            if (Nota > 12) Igual60++;
            Media += Nota;
            N--;
        }
    }
    Media = (float)Media/aux;
    printf("\nA maior nota foi %i", Maior);
    printf("\nA menor nota foi %i", Menor);
    printf("\n%i estao acima da media",Igual60);
    printf("\nA media da turma equivale a %f",Media);
    */

    /*
    int termo, razao, N, pares = 0;
    bool isPar;

    printf("\n\tQuestao 4");
    printf("\n\tNumero de termos pares da PG\n");
    printf("\nNumero de termos da PG --> ");
    scanf("%i", &N);
    printf("\nRazao da PG --> ");
    scanf("%i", &razao);
    printf("\nPrimeiro termo da PG --> ");
    scanf("%i", &termo);
    while(N > 0){
        isPar = (termo%2 == 0);
        if(isPar) pares++;
        termo *= razao;
        N--;
    }
    printf("O numero de termos pares da PG equivale a %i", pares);
    */

    /*
    int N = 1, Nota = 0, Maior = 0, Menor = 0, Igual60 = 0;
    float Media = 0;
    bool ERRO;

    printf("\n\tQuestao 3");
    printf("\n\tNotas da sala\n");
    while(Nota != -1){
        do{
            printf("\nNota do Aluno --> ");
            scanf("%i",&Nota);
            ERRO = (((Nota < 0)||(Nota > 20))&&(Nota != -1));
            if(ERRO) printf("\n\tValorInvalido\n");
        }while(ERRO);
        if(Nota == -1) break;
        Nota = Maior = Menor;
        if(Nota > 12) Igual60;
        Media += Nota;
        N++;
        while(Nota != -1){
            do{
                printf("\nNota do Aluno --> ");
                scanf("%i",&Nota);
                ERRO = (((Nota < 0)||(Nota > 20))&&(Nota != -1));
                if(ERRO) printf("\n\tValorInvalido\n");
            }while(ERRO);
            if (Nota > Maior) Maior = Nota;
            else if ((Nota < Menor)&&(Nota != -1)) Menor = Nota;
            if (Nota > 12) Igual60++;
            Media += Nota;
            N++;
        }
    }
    Media = (float)Media/N;
    printf("\nA maior nota foi %i", Maior);
    printf("\nA menor nota foi %i", Menor);
    printf("\n%i estao acima da media",Igual60);
    printf("\nA media da turma equivale a %f",Media);


    /*
    int Nume1 = 11, Nume2 = 101;
    float H, Soma = 0;

    printf("\n\tQuestao 6");
    printf("\n\tCalcular o valor de H\n\n");
    for(int i = 0; i<10; i++){
        if(i%2 == 0){
            H = (float)Nume1/Nume2;
            printf(" %i/%i",Nume1,Nume2);
        }
        else{
            H = (float)Nume2/Nume1;
            printf(" %i/%i",Nume2,Nume1);
        }
        Nume1++;
        Nume2++;
        Soma += H;
    }
    printf("\nA soma dos valores de H equivalem a %.2f",Soma);
    */

    return 0;
}
