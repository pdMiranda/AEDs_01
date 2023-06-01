#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int Menu()
{
    int op;
    bool ERRO;
    do
    {
        printf("\n\tMenu de Opcoes\n\n[0] - Sair\n[1] - Inicializar o Ambiente\n[2] - Ler Time do Coracao\n[3] - Escrever os Times do Coracao\n[4] - Pesquisar pelo Percentual de cada Time\n\n--> ");
        scanf("%i",&op);
        ERRO = ((op < 0)||(op > 4));
        if(ERRO) printf("\n\tValor Invalido!\n");
    }
    while(ERRO);
    return op;
}

void Inicializar(FILE* arq)
{
    arq = fopen("Time.dat","w");
    fclose(arq);
}

void LerTimes(FILE* arq)
{
    const char FLAG = 'S';
    bool error;
    char time;
    arq = fopen("Time.dat", "a");
    do
    {
        printf("\n\tTime Favorito\n\n[A] - Atletico\n[C] - Cruzeiro\n[O] - Outro\n[S] - Sair\n\n--> ");
        scanf(" %c",&time);
        time = toupper(time);
        error = ((time != 'A')&&(time != 'C')&&(time != 'O')&&(time != 'S'));
        if(error) printf("\n\tValor Invalido\n\n");
    }
    while(error);
    while(time != FLAG)
    {
        do
        {
            fprintf(arq, "%c\n", time);
            printf("\n\tTime Favorito\n\n[A] - Atletico\n[C] - Cruzeiro\n[O] - Outro\n[S] - Sair\n\n--> ");
            scanf(" %c",&time);
            time = toupper(time);
            error = ((time != 'A')&&(time != 'C')&&(time != 'O')&&(time != 'S'));
            if(error) printf("\n\tValor Invalido\n\n");
        }
        while(error);
    }
    fclose(arq);
}

void EscreverTimes(FILE* arq)
{
    char X;
    if((arq = fopen("Time.dat","r"))!= NULL)
    {
        fscanf(arq," %c",&X);
        while(!feof(arq))
        {
            if(X == 'A') printf("\nAtletico");
            else if (X == 'C') printf("\nCruzeiro");
            else printf("\nOutro");
            fscanf(arq, " %c",&X);
        }
        fclose(arq);
    }
}

int tamanhoArquivo(FILE* arq)
{
    char X;
    int contador = 0;
    if((arq = fopen("Time.dat", "r"))!= NULL)
    {
        fscanf(arq, " %c", &X);
        contador += 1;
        while(!feof(arq))
        {
            contador += 1;
            fscanf(arq," %c", &X);
        }
        fclose(arq);
    }
    return contador - 1;
}

float Percentual(FILE* arq)
{
    printf("\n%i", tamanhoArquivo(arq));
    bool error;
    char escolha;
    int tamanho = tamanhoArquivo(arq);
    int X, C = 0;
    float percentual = 0;
    char arranjo[tamanho];
    if((arq = fopen("Time.dat", "r"))!= NULL)
    {
        for(int i = 0; i < tamanho; i++)
        {
            fscanf(arq," %c", &X);
            arranjo[i] = X;
        }
        fclose(arq);
    }
    do
    {
        printf("\nQual para saber o percentual\n[A] - Atletico\n[C] - Cruzeiro\n[O] - Outros\n[S] - Sair\n--> ");
        scanf(" %c", &escolha);
        escolha = toupper(escolha);
        error = ((escolha != 'A')&&(escolha != 'C')&&(escolha != 'O')&&(escolha != 'S'));
        if(error) printf("\n\tValor Invalido\n\n");
    }
    while(error);
    if(escolha == 'A')
    {
        for(int i = 0; i < tamanho; i++)
        {
            if(arranjo[i] == 'A') C++;
        }
        percentual = ((float)C/tamanho)*100;
    }
    else if(escolha == 'C')
    {
        for(int i = 0; i < tamanho; i++)
        {
            if(arranjo[i] == 'C') C++;
        }
        percentual = ((float)C/tamanho)*100;
    }
    else if(escolha == 'O')
    {
        for(int i = 0; i < tamanho; i++)
        {
            if(arranjo[i] == 'O') C++;
        }
        percentual = ((float)C/tamanho)*100;
    }
    printf("\nO percentual do Time equivale a %.2f porcento do total", percentual);
    return percentual;
}


int main()
{
    FILE* arq;
    int op = Menu();
    while(op != 0)
    {
        switch(op)
        {
        case 1:
            Inicializar(arq);
            break;
        case 2:
            LerTimes(arq);
            break;
        case 3:
            EscreverTimes(arq);
            break;
        case 4:
            Percentual(arq);
        }
        op = Menu();
    }

    return 0;
}
