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


int menu()
{
    int op;
    do
    {
        printf("\n\tMenu\n[0] - sair\n[1] - cadastra data\n[2] - listar datas\n[3] - pesquisar data por mes chave\n--> ");
        scanf("%i", &op);
        if((op < 0)||(op > 3)) printf("\n\tValor Invalido\n");
    }
    while((op < 0)||(op > 3));
}


int main()
{
    cout << "Hello world!" << endl;

    Data* registro[MAX];
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
            registro[tamanho] = new Data();
            if(tamanho < MAX)
            {
                registro[tamanho]->leData();
            }
            tamanho++;
            break;
        case 2:
            for(int i = 0; i < tamanho; i++)
            {
                registro[i]->escreveData();
            }
            break;
        case 3:
            int chave;
            printf("\nMes a ser usado como chave [mm] --> ");
            scanf("%i",&chave);
            for(int i = 0; i < tamanho; i++)
            {
                if(registro[i]->dataRelativa(chave))
                {
                    registro[i]->escreveData();
                }
            }
        }
    }
    while(op!= 0);

    return 0;
}
