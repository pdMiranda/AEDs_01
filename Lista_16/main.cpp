#include <iostream>

using namespace std;

class Data{
    private:
        int dia;
        int mes;
        int ano;
    public:
        void setDia(int dia)
        {
            this->dia = dia;
        }
        int getDia()
        {
            return this->dia;
        }

        void setMes(int mes)
        {
            this->mes = mes;
        }
        int getMes()
        {
            return this->mes;
        }

        void setAno(int ano)
        {
            this->ano = ano;
        }
        int getAno()
        {
            return this->ano;
        }

        void setData(int dia, int mes, int ano)
        {
            this->setDia(dia);
            this->setMes(mes);
            this->setAno(ano);
        }

        bool DataValida(){
            bool isValid = true;
            if((this->dia < 1)||(this->dia > 31)){
                if((this->mes < 1)||(this->mes > 12)){
                    isValid = false;
                }
            }
            return isValid;
        }

        char* dataExt(Data X)
        {
            char* ext[] = {"janeiro","fevereiro","marco","abril","maio","junho","julho","agosto","setembro","outubro","novembro","dezembro"};

            return ext[(this->mes - 1)];
        }




};

int main()
{
    cout << "Hello world!" << endl;
    Data D;
    D.setMes(12);
    printf("%s", D.dataExt(D));
    return 0;
}
