#include <iostream>
#include <stdbool.h>

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
