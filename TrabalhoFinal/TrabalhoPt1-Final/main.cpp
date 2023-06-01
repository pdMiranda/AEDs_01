#include <iostream>
#include <stdbool.h>
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

    bool setDia(int dia);
    bool setMes(int mes);
    bool setAno(int ano);
    void setData(int dia, int mes, int ano);

    int getDia();
    int getMes();
    int getAno();

    bool dataValida();
    char* dataExt();

    void leData();
    void escreveData();
    bool dataRelativa(int mes);
};

bool Data::setDia(int dia)
{
    bool isValid = false;
    if((dia >= 1)&&(dia <= 31)){
        isValid = true;
        this->dia = dia;
    }
    return isValid;
}

bool Data::setMes(int mes)
{
    bool isValid = false;
    if((mes >= 1)&&(mes <= 12)){
        isValid = true;
        this->mes = mes;
    }
    return isValid;
}

bool Data::setAno(int ano)
{
    this->ano = ano;
}

void Data::setData(int dia, int mes, int ano)
{
    this->setDia(dia);
    this->setMes(mes);
    this->setAno(ano);
}

int Data::getDia()
{
    return dia;
}

int Data::getMes()
{
    return mes;
}

int Data::getAno()
{
    return ano;
}

bool Data::dataValida()
{
    bool isValid = true;
    if((this->dia < 1)||(this->dia > 31)) isValid = false;
    else if((this->mes < 1)||(this->mes > 12)) isValid = false;
    return isValid;
}

char* Data::dataExt()
{
    char* mes[]= { "janeiro","fevereiro",
                   "marco","abril", "maio", "junho",
                   "julho","agosto", "setembro",
                   "outubro","novembro", "dezembro"
                 };
    return mes[(this->mes-1)];
}

void Data::leData()
{
    int dia, mes, ano;
    printf("Data [dd/mm/aa] --> ");
    scanf("%i/%i/%i", &dia, &mes, &ano);
    setData(dia, mes, ano);
}

void Data::escreveData()
{
    printf("\n%i/%i/%i", this->getDia(), this->getMes(), this->getAno());
}

bool Data::dataRelativa(int mes)
{
    bool isRelative = false;
    if(this->getMes() == mes) isRelative = true;
    return isRelative;
}


int menu()
{
    int op;
    do
    {
        printf("\n\tMenu\n\n[0] - Sair\n[1] - Cadastra Data\n[2] - Listar Datas\n[3] - Pesquisar data por mes chave\n--> ");
        scanf("%i", &op);
        if((op < 0)||(op > 3)) printf("\n\tValor Invalido\n");
    }
    while((op < 0)||(op > 3));
}


int main()
{
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
