#include <iostream>
#include <stdbool.h>
#include "data.h"

using namespace std;

//Classe pessoa e sua Funções

class Pessoa
{
private:
    string nome;
    Data nascimento;
public:
    Pessoa()
    {
        nascimento.setData(0,0,0);
        nome = "NULL";
    }

    void setNome(string nome);
    void setNascimento(int dia, int mes, int ano);

    string getNome();
    int getNascimentoDia();
    int getNascimentoMes();
    int getNascimentoAno();

    void lePessoa();
    virtual void escreverPessoa();

    virtual void setOrigem() = 0;
    virtual string getOrigem() = 0;
};


void Pessoa::setNome(string nome)
{
    this->nome = nome;
}

void Pessoa::setNascimento(int dia, int mes, int ano)
{
    this->nascimento.setDia(dia);
    this->nascimento.setMes(mes);
    this->nascimento.setAno(ano);
}

string Pessoa::getNome()
{
    return this->nome;
}

int Pessoa::getNascimentoDia()
{
    return this->nascimento.getDia();
}

int Pessoa::getNascimentoMes()
{
    return this->nascimento.getMes();
}

int Pessoa::getNascimentoAno()
{
    return this->nascimento.getAno();
}

void Pessoa::lePessoa()
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


void Pessoa::escreverPessoa()
{
    printf("\nData de nascimento: %i/%i/%i -- Nome: %s -- Especificacao: %s", this->getNascimentoDia(), this->getNascimentoMes(), this->getNascimentoAno(), this->getNome().c_str(), this->getOrigem().c_str());
}


class Professor: public Pessoa
{
private:
    string departamento;
public:
    Professor():Pessoa()
    {
        departamento = "NULL";
    };

    void setDepto(string departamento);
    string getDepto();

    void leDepto();

    void leProfessor();
    void escreveProfessor();

    void setOrigem();
    string getOrigem();

    void escreverPessoa();
};

void Professor::setDepto(string departamento)
{
    this->departamento = departamento;
}

string Professor::getDepto()
{
    return departamento;
}

void Professor::leDepto()
{
    string departamento;
    printf("\nDepartamento do Professor --> ");
    fflush(stdin);
    getline(cin, departamento);
    this->setDepto(departamento);
}

void Professor::escreveProfessor()
{
    printf("\n%i/%i/%i -- %s -- %s\n", this->getNascimentoDia(), this->getNascimentoMes(), this->getNascimentoAno(), this->getNome().c_str(),this->getDepto().c_str());
}

void Professor::leProfessor()
{
    string departamento;

    this->lePessoa();
    printf("\nDepartamento --> ");
    fflush(stdin);
    getline(cin, departamento);
    this->setDepto(departamento);
}

void Professor::setOrigem()
{
    this->leDepto();
}

string Professor::getOrigem()
{
    return this->getDepto();
}

void Professor::escreverPessoa()
{
    printf("\nData de nascimento: %i/%i/%i -- Nome: %s -- Departamento: %s", this->getNascimentoDia(), this->getNascimentoMes(), this->getNascimentoAno(), this->getNome().c_str(), this->getOrigem().c_str());
}

//Classe Aluno e sua Funções

class Aluno: public Pessoa
{
private:
    string curso;
public:
    Aluno():Pessoa()
    {
        curso = "NULL";
    };

    void setCurso(string curso);
    string getCurso();

    void leCurso();

    void escreveAluno();
    void leAluno();

    void setOrigem();
    string getOrigem();

    void escreverPessoa();
};

void Aluno::setCurso(string curso)
{
    this->curso = curso;
}

string Aluno::getCurso()
{
    return curso;
}

void Aluno::leCurso()
{
    string curso;
    printf("\nCurso do Aluno --> ");
    fflush(stdin);
    getline(cin, curso);
    this->setCurso(curso);
}

void Aluno::escreveAluno()
{
    printf("\n%i/%i/%i -- %s -- %s\n", this->getNascimentoDia(), this->getNascimentoMes(), this->getNascimentoAno(), this->getNome().c_str(), this->getCurso().c_str());
}

void Aluno::leAluno()
{
    string curso;

    this->lePessoa();

    printf("\nCurso --> ");
    fflush(stdin);
    getline(cin, curso);
    this->setCurso(curso);
}

void Aluno::setOrigem()
{
    this->leCurso();
}

string Aluno::getOrigem()
{
    return this->getCurso();
}

void Aluno::escreverPessoa()
{
    printf("\nData de nascimento: %i/%i/%i -- Nome: %s -- Curso: %s", this->getNascimentoDia(), this->getNascimentoMes(), this->getNascimentoAno(), this->getNome().c_str(), this->getOrigem().c_str());
}

