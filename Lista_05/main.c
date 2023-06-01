#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    /*
    int A,C,O,Total;
    bool ERRO;
    float N,perA,perC,perO;
    char time;
    A = C = O = Total = 0;
    printf("\n\n\tCalcular o Time da Sala\n");
    do{
        printf("\nQuantos alunos na sala --> ");
        scanf("%f", &N);
        ERRO = (N < 0) || (N > 70);
        if(ERRO){
            printf("\nValor Invalido\n");
        }
    }while(ERRO);
    while(N>0){
        do{
            printf("\n\tQual o Time Favorito ?\n[A]Atletico\n[C]Crizeiro\n[O]Outro\n --> ");
            scanf(" %c",&time);
            time = toupper(time);
            ERRO = ((time != 'A')&&(time != 'C')&&(time != 'O'));
            if(ERRO){
                printf("\nValor Invalido");
            }
        }while(ERRO);
        N--;
        switch(time){
            case 'A':
                A++;
                break;
            case 'C':
                C++;
                break;
            case 'O':
                O++;
                break;
        }
    }
    Total = A + C + O;
    perA = ((float)A/Total)*100;
    perC = ((float)C/Total)*100;
    perO = ((float)O/Total)*100;
    if((perA > perC) && (perA > perO)){
        printf("\nAtletico = %.2f \nCruzeiro = %.2f\nOutros = %.2f\nA maior parte da sala torce para o Atletico",perA,perC,perO);
    }
    else if((perC > perA) && (perC > perO) ){
        printf("\nAtletico = %.2f \nCruzeiro = %.2f\nOutros = %.2f\nA maior parte da sala torce para o Cruzeiro",perA,perC,perO);
        }
        else{
            printf("\nAtletico = %.2f\nCruzeiro = %.2f\nOutros = %.2f\nA maior parte da sala torce para outro time",perA,perC,perO);
        }
    */

    /*
    int N, aux;
    float Maior, Media,Nota, Soma;
    bool ERRO;
    Soma = Media = Maior =  aux = 0;
    printf("\n\n\tCalcular a Media de Notas de uma Turma");
    do{
        printf("\nQuantos alunos na sala --> ");
        scanf("%i", &N);
        ERRO = N < 0;
        if(ERRO){
            printf("\nValor Invalido");
        }
    }while(ERRO);
    while(aux < N){
        do{
           printf("\nDigite o valor da nota --> ");
           scanf("%f", &Nota);
           ERRO = (Nota < 0) || (Nota > 100);
           if(ERRO){
                printf("\nValor Invalido\n");
           }
        }while(ERRO);
        if(Nota > Maior){
            Maior = Nota;
        }
        Soma += Nota;
        aux++;
    }
    Media = Soma/N;
    printf("\nA media de notas da sala foi %.2f\nA maior nota da sala foi %.2f", Media, Maior);
    */

    /*
    int Chapa1, Chapa2, Branco, Voto;
    bool ERRO;
    Chapa1 = Chapa2 = Branco = 0;

    printf("\n\n\tCalcular Votos\n");
    do{
        do{
            printf("\nEm qual das opcoes ira votar\n[0]Sair do Programa\n[1]Chapa 1\n[2]Chapa 2\n[3]Nulo/Branco\n--> ");
            scanf("%i", &Voto);
            ERRO = ((Voto < 0) || (Voto > 3));
            if(ERRO){
                printf("\n\tValor Invalido\n");
            }
        }while(ERRO);
        switch(Voto){
            case 1:
                Chapa1++;
                break;
            case 2:
                Chapa2++;
                break;
            case 3:
                Branco++;
        }
    }while(Voto != 0);

    printf("\nChapa 1 = %i\nChapa 2 = %i\nBranco/Nulo = %i\n",Chapa1, Chapa2, Branco);
    if((Chapa1 > Chapa2)&&(Chapa1 > Branco)){
        printf("\nA Chapa 1 ganhou com a maioria dos votos");
    }else if((Chapa2 > Chapa1)&&(Chapa2 > Branco)){
            printf("\nA Chapa 2 ganhou com a maioria dos votos");
        }else if((Branco > Chapa1)&&(Branco > Chapa2)){
                printf("\nA maioria dos estudantes votou em Branco/Nulo");
            }else if((Chapa1 == Chapa2)&&(Chapa1 > Branco)){
                    printf("\nOcorreu um empate entre a Chapa 1 e a Chapa 2");
                }else if((Chapa1 == Branco)&&(Chapa1 > Chapa2)){
                        printf("\nOcorreu um empate entre a Chapa 1 e os votos em Branco/Nulo");
                    }else if((Chapa2 == Branco)&&(Chapa2 > Chapa1)){
                            printf("\nOcorreu um empate entre a Chapa 2 e os votos em Branco/Nulo");
                        }else{
                                printf("\nOcorreu um empate triplo");
                            }
        */

    /*
    char genero;
    float Homens, Mulheres , MaiorIdade;
    int Idade, Novo, Velho, Alunos, aux;
    bool ERRO;
    Velho = Homens = Mulheres = aux = MaiorIdade = 0;
    Novo = 90;
    printf("\n\n\tIdentificar Perfil da  Turma\n\n");
    do{
        printf("\nNumero de Alunos --> ");
        scanf("%i", &Alunos);
        ERRO = Alunos < 0;
        if(ERRO){
            printf("\nValor Invalido");
        }
    }while(ERRO);
    while(aux < Alunos){
        do{
            printf("\nGenero do Aluno\n[m]Masculino\n[f]Feminino\n--> ");
            scanf(" %c", &genero);
            genero = tolower(genero);
            ERRO = ((genero != 'm')&&(genero != 'f'));
            if(ERRO){
                printf("\nValor invalido\n");
            }
        }while(ERRO);
        switch(genero){
            case 'm':
                Homens++;
                break;
            case 'f':
                Mulheres++;
        }
        do{
            printf("\nIdade do Aluno --> ");
            scanf("%i",&Idade);
            ERRO = ((Idade < 0)||(Idade > 90));
            if(ERRO){
                printf("\nValor Invalido\n");
            }
        }while(ERRO);
        if(Idade < Novo ){
            Novo = Idade;
        }
        if(Idade > Velho){
            Velho = Idade;
        }
        if(Idade > 18){
            MaiorIdade++;
        }
        aux++;
    }
    printf("\nA sala possui \n\t%.2f porcento de Homens\n\t%.2f porcento de Mulheres\n\t%.2f porcento de Maiores de idade\n\tA pessoa mais velha tem %i\n\tA pessoa mais nova tem %i",((float)Homens/Alunos)*100,((float)Mulheres/Alunos)*100,((float)MaiorIdade/Alunos)*100,Velho,Novo);
    */

    char genero;
    float Homens, Mulheres , MaiorIdade;
    int Idade, Novo, Velho, Alunos;
    bool ERRO;
    Velho = Homens = Mulheres = MaiorIdade = Alunos = 0;
    Novo = 90;
    printf("\n\n\tIdentificar Perfil da  Turma\n\n");
    do{
        do{
            printf("\nGenero do Aluno\n[m]Masculino\n[f]Feminino\n[s]Sair do Programa\n--> ");
            scanf(" %c", &genero);
            genero = tolower(genero);
            ERRO = ((genero != 'm')&&(genero != 'f')&&(genero != 's'));
            if(ERRO){
                printf("\nValor invalido\n");
            }
        }while(ERRO);
        if(genero == 's'){
            break;
        }
        switch(genero){
            case 'm':
                Homens++;
                break;
            case 'f':
                Mulheres++;
        }
        do{
            printf("\nIdade do Aluno --> ");
            scanf("%i",&Idade);
            ERRO = ((Idade < 0)||(Idade > 90));
            if(ERRO){
                printf("\nValor Invalido\n");
            }
        }while(ERRO);
        if(Idade < Novo ){
            Novo = Idade;
        }
        if(Idade > Velho){
            Velho = Idade;
        }
        if(Idade > 18){
            MaiorIdade++;
        }
        Alunos++;
    }while(genero != 's');
    if(Alunos > 0){
      printf("\nA sala possui \n\t%.2f porcento de Homens\n\t%.2f porcento de Mulheres\n\t%.2f porcento de Maiores de idade\n\tA pessoa mais velha tem %i\n\tA pessoa mais nova tem %i",((float)Homens/Alunos)*100,((float)Mulheres/Alunos)*100,((float)MaiorIdade/Alunos)*100,Velho,Novo);
    }
    else{
        printf("\nNenhum dado inserido");
    }





    return 0;
}
