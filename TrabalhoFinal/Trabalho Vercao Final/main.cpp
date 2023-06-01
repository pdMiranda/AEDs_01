#include <iostream>
#include "pessoa.h"

int tamanho = 0;
int tamanhoProfessor = 0;
int tamanhoAluno = 0;

const int MAX = 100;

using namespace std;

int menu()
{
    int op;
    do
    {
        printf("\n\tMenu\n\n[0] - Sair\n[1] - Cadastra Professor\n[2] - Cadastrar Aluno\n[3] - Listar todas as pessoas cadastradas\n[4] - Pesquisar Aniversariantes do Mes\n--> ");
        scanf("%i", &op);
        if((op < 0)||(op > 4)) printf("\n\tValor Invalido\n");
    }
    while((op < 0)||(op > 4));
    return op;
}

void cadastraAluno(Pessoa* registro[]) //Função com polimorfismo
{
    registro[tamanho] = new Aluno();
    if(tamanho < MAX)
    {
        registro[tamanho]->lePessoa();
        registro[tamanho]->setOrigem();
    }
    tamanho++;
}

void cadastraProfessor(Pessoa* registro[])
{
    registro[tamanho] = new Professor();
    if(tamanho < MAX)
    {
        registro[tamanho]->lePessoa();
        registro[tamanho]->setOrigem();
    }
    tamanho++;
}

void escrevePessoa(Pessoa* pessoa) //Função com polimorfismo
{
    pessoa->escreverPessoa();
}

void listarPessoas(Pessoa* registro[]) //Função com polimorfismo
{
    for(int i = 0; i < tamanho; i++)
    {
        escrevePessoa(registro[i]);
    }
}

void aniversariateMes(Pessoa* registro[])
{
    int chave;
    printf("\nMes a ser usado como chave [mm] -->");
    scanf("%i", &chave);
    for(int i = 0; i < tamanho; i++)
    {
        if(registro[i]->getNascimentoMes() == chave)
        {
            registro[i]->escreverPessoa();
        }
    }
}

int main()
{
    Pessoa* registro[MAX];
    int op;

    do
    {
        op = menu();
        switch(op)
        {
        case 0:
            printf("\nObrigado");
            break;
        case 1:
            cadastraProfessor(registro);
            break;

        case 2:
            cadastraAluno(registro);
            break;

        case 3:
            listarPessoas(registro);
            break;
        case 4:
            aniversariateMes(registro);
        }
    }
    while(op!= 0);

    return 0;
}
