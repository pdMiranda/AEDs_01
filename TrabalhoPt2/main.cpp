#include <iostream>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

const int MAX = 100;
int tamanho = 0;

using namespace std;

class Data
{
private:
    int dia;
    int mes;
    int ano;
public:
    Data()
    {
        dia = mes = ano = 0;
    }

    bool setDia(int x)
    {
        bool isValid = false;
        if((x >= 1) && (x <= 31))
        {
            isValid = true;
            this->dia = x;
        }
        return isValid;
    }

    bool setMes(int x)
    {
        bool isValid = false;
        if((x >= 1)&&(x <= 12))
        {
            isValid = true;
            this->mes = x;
        }
        return isValid;
    }

    void setAno(int x)
    {
        this->ano = x;
    }


    void setData(int dia, int mes, int ano)
    {
        this->setDia(dia);
        this->setMes(mes);
        this->setAno(ano);
    }


    int getDia()
    {
        return dia;
    }

    int getMes()
    {
        return mes;
    }

    int getAno()
    {
        return ano;
    }

    bool dataValida()
    {
        bool isValid = true;
        if((this->dia < 1)||(this->dia > 31)) isValid = false;
        else if((this->mes < 1)||(this->mes > 12)) isValid = false;
        return isValid;
    }

    char* dataExt()
    {
        char* mes[]= { "janeiro","fevereiro",
                       "marco","abril", "maio", "junho",
                       "julho","agosto", "setembro",
                       "outubro","novembro", "dezembro"
                     };
        return mes[(this->mes-1)];
    }

    void leData()
    {
        int dia, mes, ano;
        printf("Data [dd/mm/aa] --> ");
        scanf("%i/%i/%i", &dia, &mes, &ano);
        setData(dia, mes, ano);
    }

    void escreveData()
    {
        printf("\n%i/%i/%i", this->getDia(), this->getMes(), this->getAno());
    }

    bool dataRelativa(int mes)
    {
        bool isRelative = false;
        if(this->getMes() == mes) isRelative = true;
        return isRelative;
    }

};

class Pessoa
{
private:
    string nome;
    Data nascimento;

public:

    Pessoa()
    {
        nascimento.setData(0, 0, 0);
        nome = "NULL";
    }

    void setNome(string nome)
    {
        this->nome = nome;
    }

    void setNascimento(int dia, int mes, int ano)
    {
        this->nascimento.setDia(dia);
        this->nascimento.setMes(mes);
        this->nascimento.setAno(ano);
    }

    void lePessoa()
    {
        int dia, mes, ano;
        string nome;
        printf("\nData [dd/mm/aa] --> ");
        scanf("%i/%i/%i",&dia, &mes,&ano);
        this->nascimento.setData(dia, mes, ano);
        printf("\nNome --> ");
        fflush(stdin);
        getline(cin, nome);
        this->setNome(nome);
    }

    string getNome()
    {
        return this->nome;
    }

    int getNascimentoDia()
    {
        return this->nascimento.getDia();
    }

    int getNascimentoMes()
    {
        return this->nascimento.getMes();
    }

    int getNascimentoAno()
    {
        return this->nascimento.getAno();
    }

    void escreverPessoa()
    {
        printf("\n%i/%i/%i -- %s\n", this->getNascimentoDia(), this->getNascimentoMes(), this->getNascimentoAno(), this->getNome().c_str());
    }

};


int menu()
{
    int op;
    do
    {
        printf("\n\tMenu\n\n[0] - sair\n[1] - cadastra pessoa\n[2] - listar pessoas\n[3] - pesquisar aniversariantes do mes\n--> ");
        scanf("%i", &op);
        if((op < 0)||(op > 3)) printf("\n\tValor Invalido\n");
    }
    while((op < 0)||(op > 3));
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
            registro[tamanho] = new Pessoa();
            if(tamanho < MAX)
            {
                registro[tamanho]->lePessoa();
            }
            tamanho++;
            break;
        case 2:
            for(int i = 0; i < tamanho; i++)
            {
                registro[i]->escreverPessoa();
            }
            break;
        case 3:
            int chave;
            printf("\nMes a ser usado como chave [mm] --> ");
            scanf("%i",&chave);
            for(int i = 0; i < tamanho; i++)
            {
                if(registro[i]->getNascimentoMes() == chave)
                {
                    registro[i]->escreverPessoa();
                }
            }
        }
    }
    while(op!= 0);

    return 0;
}
