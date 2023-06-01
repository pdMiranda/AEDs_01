#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    /*
    int deno = 100;
    int N;
    float soma, operacao;
    soma = 0;
    printf("\n\tCalcular e escrever o valor de H");
    printf("\nQuantas vezes o programa sera executado --> ");
    scanf("%i", &N);
    for(; N > 0; N-- ){
        operacao = 1.0/deno;
        soma += operacao;
        deno -= 3;
        printf(" %f",operacao);
    }
    printf("\nA soma equivale a %f", soma);
    */

    /*
    float operacao;
    int N;
    int nume1, nume2, aux;
    nume1 = 1;
    nume2 = 100;
    printf("\n\tQuestao 2");
    printf("\nQuantas vezes o programa sera executado --> ");
    scanf("%i",&N);
    for(int i = 0; i < N ; i++){
        if((i%2) == 0){
           operacao = (float)nume1/nume2;
        }
        else{
            operacao = (float)nume2/nume1;
        }
        nume1 += 1;
        nume2 -= 3;
        printf(" %f",operacao);

    }
    */

    /*
    int N;
    float termo, razao;
    printf("\n\tQuestao 3");
    printf("\nNumero de termos da PG --> ");
    scanf("%i", &N);
    printf("\nValor do primeiro termo --> ");
    scanf("%f", &termo);
    printf("\nValor da razao da PG --> ");
    scanf("%f", &razao);

    for(;N > 0;N--){
        printf(" %.2f",termo);
        termo *= razao;
    }
    */

    /*
    int num1 = 1, num2 = 0, N;
    float soma = 0;
    bool ERRO;

    printf("\n\tQuestao 4");
    do{
        printf("\nQuantas vezes o programa sera executado --> ");
        scanf("%i",&N);
        ERRO = N < 1;
        if(ERRO){
            printf("\n\tValor Invalido\n\n");
        }
    }while(ERRO);
    for(;N > 0;N--){
        num1 += num2;
        num2 = num1 - num2;
        soma += num1;
        printf(" %i",num1);
    }
    */


    /*
    bool ERRO;
    float base,expoente, operacao, aux;
    printf("\n\tQuestao 5");

    printf("\nDigite o valor da base --> ");
    scanf("%f", &base);
    do{
        printf("\nDigite o valor do expoente --> ");
        scanf("%f",&expoente);
        ERRO = !(expoente == (int)expoente);
        if(ERRO){
            printf("\n\tValor Invalido\n");
        }
    }while(ERRO);
    aux = base;
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
    else{
        base = 1;
    }
    printf("\nO Valor da operacao equivael a %f", base);
    */

    /*
    bool ERRO;
    float numero, aux;
    printf("\n\tQuestao 6");

    do{
        printf("\nNumero para calcular o fatorial --> ");
        scanf("%f",&numero);
        ERRO = !(numero == (int)numero);
    }while(ERRO);
    aux = numero;

    for(int i = 1; i < aux; i++){
        numero *= i;
    }
    printf("\nO Valor da operacao equivale a %.0f",numero);
    */


    /*
    float razao, NPA, termo, Dvalor, finalizar, valores = 0;
    bool ERRO, REPEAT;
    printf("\n\tQuestao 7\n");
    do{
        do{
            printf("\nValor do primeiro termo da PA --> ");
            scanf("%f",&termo);
            ERRO = !(termo == (int)termo);
            if(ERRO) printf("\n\tValor Invalido\n");
        }while(ERRO);

        do{
            printf("\nValor da razao da PA --> ");
            scanf("%f",&razao);
            ERRO = !(razao == (int)razao);
            if(ERRO) printf("\n\tValor Invalido\n");
        }while(ERRO);

        do{
            printf("\nQuantas vezes o programa sera executado --> ");
            scanf("%f", &NPA);
            ERRO = ((NPA <= 0) || !(NPA == (int)NPA));
            if(ERRO) printf("\n\tValor Invalido\n");
        }while(ERRO);

        do{
            printf("\nValor que sera verificado a possibilidade de divisao --> ");
            scanf("%f",&Dvalor);
            ERRO = ((Dvalor == 0) || !(Dvalor == (int)Dvalor));
            if(ERRO) printf("\n\tValor Invalido\n");
        }while(ERRO);

        for(;NPA > 0; NPA--){
            if(((int)termo%(int)Dvalor) == 0) valores++;
            termo += razao;
        }

        printf("\nO numero de Termos divisiveis por X na PA equivale a %.0f", valores);

        printf("\nRepetir o programa [1]Sim [2]Nao --> ");
        scanf("%f",&finalizar);
        switch((int)finalizar){
            case 1:
                REPEAT = true;
                break;
            case 2:
                REPEAT = false;
                break;
            default:
                printf("\nValor invalido, Finalizando programa");
        }
    }while(REPEAT);
    */
    bool ERRO, REPEAT;
    int numero, maior,menor, repeat, Nnumeros = 0;;
    numero = maior = menor = 0;
    printf("\n\tQuestao 8\n");
    do{
        do{
            do{
                printf("\nNumero da Sequencia\n[0 para sair] --> ");
                scanf("%i", &numero);
                ERRO = (numero < 0);
                if(ERRO) printf("\n\tValor Invalido\n");
            }while(ERRO);
            if (numero > maior) maior = numero;
            if ((numero < menor)&&(numero != 0)) menor = numero;
            Nnumeros++;
        }while(numero != 0);

        if(Nnumeros != 0){
            printf("\nO maior numero da sequencia equivale a %i\nO menor numero da sequencia equivale a %i",maior,menor);
        }
        else printf("\nNenhum valor informado");;
        do{
            printf("\nRepetir Programa\n[1]Sim\n[2]Nao\n--> ");
            scanf("%i", &repeat);
            switch(repeat){
                case 1:
                    REPEAT = true;
                    break;
                case 2:
                    REPEAT = false;
                    break;
                default:
                    printf("\n\tValor Invalido\n");
                    ERRO = true;
            }
        }while(ERRO);
    }while(REPEAT);

    return 0;
}
