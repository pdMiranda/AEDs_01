#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float escolha;
    printf("\nEscolha qual das funcoes\n1- Perimetro de quadrado\n2- Anos para dias\n3- Peso ideal\n4- Farenheit para Celsius\n5- Area de circulo\n--> ");
    scanf("%f",&escolha);
    if (escolha == 1){ /*Perimetro de quadrado*/
        float lado,perimetro;
        printf("\nLado do quadrado: ");
        scanf("%f", &lado);
        perimetro = lado * 4;
        printf("\nO perimetro do quadrado de lado %f equivale a %f", lado, perimetro);
    }
    if (escolha == 2){ /*Anos para dias*/
        float dias,ano;
        printf("\nQuantos anos: ");
        scanf("%f", &ano);
        dias = ano * 365;
        printf("\nVoce tem %f dias de vida", dias);
    }
    if (escolha == 3){ /*Peso ideal*/
        float sexo;
        float altura,ideal;
        printf("\n1 - Masculino\n2 - Feminino\n-->  ");
        scanf("%f",&sexo);
        if(sexo == 1){
            printf("\nDigite o sua altura: ");
            scanf("%f",&altura);
            ideal = (72.7 * altura) - 58;
            printf("\nSeu peso ideal %f",ideal);
        }
        if(sexo == 2){
            printf("\nDigite o sua altura: ");
            scanf("%f",&altura);
            ideal = (62.1 * altura) - 44.7;
            printf("\nSeu peso ideal %f",ideal);
        }
    }
    if (escolha == 4){ /*Farenheit para Celsius*/
        float F,C;
        printf("\nDigite o valor em farenheit:");
        scanf("%f",&F);
        C = 5.0/9 * (F - 32);
        printf("\nOs graus em farenheit equivalem a %f Celsius",C);
    }
    if (escolha == 5){ /*Area de Circulo*/
        float r,pi,area;
        pi = 3.14;
        printf("\nDigite o raio da ciscunferencia: ");
        scanf("%f",&r);
        area = pi*pow(r,2);
        printf("\nA area do circulo equivale a %f", area);
    }
    return 0;

}
