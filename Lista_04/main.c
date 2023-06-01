#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main()
{
    int escolha;
    printf("\n\t\tAtividade\n\n\t[1/2/3/4/5] --> ");
    scanf("%i",&escolha);

    switch(escolha){
    case 1:{    /*Peso ideal com pergunta pra sair do programa*/
            bool ERRO;
            float h;
            char genero;
            float pesoIdeal;
            char rep;
            do{
                printf("\n\tCalculo do Peso Ideal\n\n");
                do{
                    printf("\nAltura: ");
                    scanf("%f", &h);
                    ERRO = h<0;
                }
                while(ERRO);
                do{
                    printf("\nGenero [M/F]: ");
                    scanf(" %c", &genero);
                    genero = toupper(genero);
                    ERRO = (genero != 'M') && (genero != 'F');
                }
                while(ERRO);
                if(genero == 'M'){
                        pesoIdeal = 72.7 * h - 58;
                }
                else{
                        pesoIdeal = 62.1 * h - 44.7;
                }
                printf("\nPeso Ideal = %f", pesoIdeal);
                printf("\nRepetir Programa ?\n [S/N] --> ");
                scanf(" %c", &rep);
                rep = toupper(rep);
            }
            while(rep == 'S');
            break;
        }
    case 2:{    /*Ano Bissexto*/
        int ano;
        char rep;
        bool ERRO;
        bool END;
        do{
                printf("\n\t\tIdentificar se o ano e bissexto ou nao\n\n");
                printf("\n\tDigite o ano --> ");
                scanf("%i", &ano);
                if ((ano%4 == 0 )&&(ano%100 != 0)||(ano%400 == 0)){
                    printf("\n\tO ano e bissexto");
                }
                else{
                    printf("\n\tO ano e normal");
                }
                do{
                printf("\n\tRepetir Programa\n\t[S/N] -- > ");
                scanf(" %c", &rep);
                rep = tolower(rep);
                ERRO = ((rep != 'S')&&(rep != 'n'));
            }
            while(ERRO);
        }
        while(rep == 'S');
        break;
    }
    case 3:{    /*Numeros inteiros de 1 a 10*/
        int num = 1;
        do{
            printf(" %i ", num);
            num += 1;
        }
        while(num != 11);
        break;
    }
    case 4:{    /*Numero inteiros de 10 a 1*/
        int num = 10;
        do {
            printf(" %i ", num);
            num -= 1;
        }
        while(num != 0);
        break;
    }
    case 5:{    /*Numeros inteiros entre dois numeros*/
         int numMax;
            int numMin;
            printf("\n\t\tEscrever intervalos numeros inteiros\n\n");
            printf("Menor numero --> ");
            scanf("%i", &numMin);
            printf("Maior numero --> ");
            scanf("%i", &numMax);
            do{
                printf(" %i ", numMax);
                numMax -= 1;
            }
            while(numMax != (numMin - 1));
            break;
        }
    }
    return 0;
}
