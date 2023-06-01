#include <stdio.h>
#include <stdlib.h>

int tamanho = 3;

struct Data{
    int dia;
    int mes;
    int ano;
};

typedef struct Data Data;

struct Pessoa{
    char nome[30];
    Data nascimento;
};

typedef struct Pessoa Pessoa;

int menu()
{
    int op;
    printf("\nQual das Opcoes\n[0]- sair\n[1]- cadastra\n[2]- pesquisa\n--> ");
    scanf("%i", &op);
    return op;
}

void cadastra(Pessoa A[])
{
   for(int i = 0; i < tamanho; i++){
    fflush(stdin);
    printf("\nNome do aluno --> ");
    gets(A[i].nome);
    printf("Data de nascimento\n[dd/mm/aa] --> ");
    scanf("%i/%i/%i", &A[i].nascimento.dia, &A[i].nascimento.mes, &A[i].nascimento.ano);
   }
}

void listaAniversario(Pessoa A[], int chave)
{
    for(int i = 0; i < tamanho; i++){
        if(A[i].nascimento.mes == chave){
            printf("%s -- %i/%i", A[i].nome, A[i].nascimento.dia, A[i].nascimento.mes);
        }
    }
}

void pesquisa(Pessoa A[])
{
    int chave;
    printf("\nChave do mes --> ");
    scanf("%i", &chave);
    listaAniversario(A, chave);
}

int main()
{
    Pessoa A[tamanho];
    int op;
    do{
        op = menu();
        switch(op){
            case 0:
                printf("\nObrigado");
                break;
            case 1:
                cadastra(A);
                break;
            case 2:
                pesquisa(A);
                break;
            default:
                printf("\nValor Invalido\n");
        }
    }while(op != 0);
    return 0;
}
