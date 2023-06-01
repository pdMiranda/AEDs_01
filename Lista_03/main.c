#include <stdio.h>
#include <stdlib.h>

int main()
{

    float escolha;
    printf("\n\t\tLista 03\n\n");
    printf("\n\t\tQual atividade\n\t1-Classificar Triangulo\n\t2-Peso Ideal\n\t3-Identificar se o ano e bissexto\n\t4-Calculadora Base\n\t--> ");
    scanf("%f", &escolha);

    if (escolha == 1){

        float L1, L2, L3;
        printf("\n\t\tPrograma para identificar se o triangulo e equilatero, isoscele ou escaleno\n\n\n");
        printf("\tDigite o valor do primeiro lado --> ");
        scanf("%f", &L1);
        printf("\tDigite o valor do segundo lado --> ");
        scanf("%f", &L2);
        printf("\tDigite o valor do terceiro lado --> ");
        scanf("%f", &L3);

        if ((L1 == L2) && (L1 == L3)){
            printf("\n\tO triangulo e EQUILATERO\n");
        }

        else{
            if((L1 != L2) && (L1 != L3) && (L2 != L3)){
                printf("\n\tO triangulo e ESCALENO\n");
            }

            else{
                printf("\n\tO triangulo e ISOSCELE\n");
            }
        }
    }
    if (escolha == 2){
        char sexo;
        float altura,ideal;
        printf("\n- Masculino\n- Feminino\n-->  ");
        scanf("%c",&sexo);
        if(sexo == 'M'){
            printf("\nDigite o sua altura: ");
            scanf("%f",&altura);
            ideal = (72.7 * altura) - 58;
            printf("\nSeu peso ideal %f",ideal);
        }
        if(sexo == 'F'){
            printf("\nDigite o sua altura: ");
            scanf("%f",&altura);
            ideal = (62.1 * altura) - 44.7;
            printf("\nSeu peso ideal %f",ideal);
        }
    }
    if (escolha == 3){
        int ano;
        printf("\n\t\tIdentificar se o ano e bissexto ou nao\n\n");
        printf("\n\tDigite o ano --> ");
        scanf("%i", &ano);
        if ((ano%4 == 0 )&&(ano%100 != 0)||(ano%400 == 0)){
            printf("\n\tO ano e bissexto");
        }
        else{
            printf("\n\tO ano e normal");
        }
    }
    if (escolha == 4){
        float n1,n2;
        float operacao;
        printf("\n\t\tCalculadora\n\n");
        printf("\n\t\tQual Operacao\n\t1-Adicao\n\t2-Subtracao\n\t3-Multiplicacao\n\t4-Divisao Inteira\n--> ");
        scanf("%f",&operacao);
        printf("\n\tDigite o primeiro numero --> ");
        scanf("%f",&n1);
        printf("\n\tDigite o segundo numero --> ");
        scanf("%f",&n2);

        if (operacao == 1 ){
            printf("A soma dos numeros %f e %f equivale a %f", n1, n2, n1 + n2);
        }

        if (operacao == 2 ){
            printf("A subitracao dos numeros %f e %f equivale a %f", n1, n2, n1 - n2);
        }

        if (operacao == 3 ){
            printf("A multiplicacao dos numeros %f e %f equivale a %f", n1, n2, n1 * n2);
        }

        if (operacao == 4 ){
            printf("A subitracao dos numeros %f e %f equivale a %f", n1, n2, n1 / n2);
        }
    }

    return 0;
}
