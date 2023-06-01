#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


bool primos(int N1, int N2)
{
    int MenorNum, i = 2;
    bool isPrimos = true;

    if(N1 > N2) MenorNum = N2;
    else MenorNum = N1;
    while((i <= MenorNum)&&(isPrimos)){
        if((N2%i == 0)&&(N1%i == 0)) isPrimos = false;
        i++;
    }
    return isPrimos;
}

void Fibonacci(int Numero)
{
    int termo, aux;
    termo = 1;
    aux = 0;
    while(Numero > 0){
        termo += aux;
        aux = termo - aux;
        Numero--;
    }
    printf("%i", termo);
}

int MaiorDivisor(int nReal)
{
    int divisor = 1;
    for(int i = 1; i < nReal; i++){
        if((nReal%i == 0)&&(i > divisor)) divisor = i;
    }
    return divisor;
}

bool ValorPrimo(int Numero)
{
    bool isPrimo = true;
    for(int i = 2; i < Numero; i++){
        if(Numero%i == 0) isPrimo = false;
    }
    return isPrimo;
}

float NovoSalario(float salario, int percent)
{
    float NovoSalario = salario + (salario*((float)percent/100));
    return NovoSalario;
}

bool Aprovado(int nota)
{
    bool Aprovado = false;
    if(nota >= 60) Aprovado = true;
    return Aprovado;
}

int main()
{
    /*
    int N1,N2;
    printf("\nPrimeiro Numero --> ");
    scanf("%i",&N1);
    printf("\nSegundo Numero --> ");
    scanf("%i",&N2);
    if(primos(N1,N2)){
        printf("\nOs numeros sao primos entre si");
    }
    else printf("\nNao sao primos");
    */

    /*
    int Numero;
    printf("\nNumero de vezes que o programa sera executado --> ");
    scanf("%i",&Numero);
    Fibonacci(Numero);
    */

    /*
    int nReal;
    printf("\nDivisor --> ");
    scanf("%i",&nReal);
    printf("\nO maior divisor e o numero %i", MaiorDivisor(nReal));
    */

    /*
    int Numero;
    printf("\nNumero a ser testado --> ");
    scanf("%i",&Numero);
    if(ValorPrimo(Numero)) printf("\nO valor e primo");
    else printf("\nO valor nao e primo");
    */

    /*
    float salario;
    int percert;
    printf("\nSalario atual --> ");
    scanf("%f",&salario);
    printf("\nPercentual do aumento --> ");
    scanf("%i",&percert);
    printf("\nO novo salario equivale a %.2f",NovoSalario(salario, percert));
    */

    /*
    int nota;
    printf("\nNota do aluno --> ");
    scanf("%i", &nota);
    if(Aprovado(nota)) printf("\nO aluno foi aprovado");
    else printf("\nO aluno nao foi aprovado");
    */

    return 0;
}
