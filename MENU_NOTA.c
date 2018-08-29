

#include <stdio.h>
#include <stdlib.h>

    void menu(int escolha, int continuar,float notaExerciciograuA,float notaTrabalhograuA,float notaProvagrauA,float notaExerciciosgrauB,float notaTrabalhograuB,float notaProvagrauB,float notaGrauAfinal,float notaGrauBFinal,float notaGrauc,float notaFinal,char substituicao)

   {
    printf(" 1 - Ajuda\n");
    printf(" 2 - Inserir nota dos exercicios do Grau A\n");
    printf(" 3 - Inserir nota do trabalho do Grau A\n");
    printf(" 4 - Inserir nota da prova do Grau A\n");
    printf(" 5 - Inserir nota dos exercícios do Grau B\n");
    printf(" 6 - Inserir nota do trabalho do Grau B\n");
    printf(" 7 - Inserir nota da prova do Grau B\n");
    printf(" 8 - Mostrar nota do Grau A\n");
    printf(" 9 - Mostrar nota do Grau B\n");
    printf(" 10 - Mostrar nota do Grau Final\n");
    printf(" 11 - Inserir substituicao de Grau\n");
    printf(" 12 - Inserir nota do Grau C\n");
    printf(" 13 - Mostrar nota do Grau C\n");
    printf(" 14 - Sair\n");
    printf("\n----------------------- ");
    
    printf("\nEscolha uma opcao: ");
    scanf("%d",&escolha);
    system("cls");
    

switch (escolha)
{
case 1:
    printf("Opcao Ajuda\n, Escolha uma das opcoes listadas abaixo, conforme sua necessidade\n");
    break;

case 2:
    printf("Insira a nota dos exercicios do Grau A\n");
    scanf("%f", &notaExerciciograuA);

    
    if (notaExerciciograuA < 0 || notaExerciciograuA > 10) 
    {
     printf("Nota Invalida\n");   
    }
    
    else
    {
        system("cls");
    }

case 3:
printf("Insira a nota do trabalho do Grau A\n");
scanf("%f", &notaTrabalhograuA);

if (notaTrabalhograuA < 0 || notaTrabalhograuA > 10) 
    {
     printf("Nota Invalida\n");   
    }
    
    else
    {
        system("cls");
    }

case 4:
printf("Insira a nota da Prova do Grau A\n");
scanf("%f", &notaProvagrauA);

if (notaProvagrauA < 0 || notaProvagrauA > 10) 
    {
     printf("Nota Invalida\n");   
    }
    
    else
    {
        system("cls");
    }

case 5:
printf("Insira a nota dos exercicios do Grau B\n");
scanf("%f", &notaExerciciosgrauB);

if (notaExerciciosgrauB < 0 || notaExerciciosgrauB > 10) 
    {
     printf("Nota Invalida\n");   
    }
    
    else
    {
        system("cls");
    }
    
case 6:
    printf("Insira a nota do Trabalho do Grau B\n");
    scanf("%f", &notaTrabalhograuB);

    if (notaTrabalhograuB < 0 || notaTrabalhograuB > 10) 
    {
     printf("Nota Invalida\n");   
    }
    
    else
    {
        system("cls");
    }

    case 7:
    printf("Insira a nota da Prova do Grau B\n");
    scanf("%f", &notaProvagrauB);

    if (notaProvagrauB < 0 || notaProvagrauB > 10) 
    {
     printf("Nota Invalida\n");   
    }
    
    else
    {
        system("cls");
    }

    case 8:
   
   notaGrauAfinal = (notaExerciciograuA*0.20)+(notaTrabalhograuA*0.30)+(notaProvagrauA*0.50);

   if(notaExerciciograuA >= 0 && notaTrabalhograuA >= 0 && notaProvagrauA >= 0)
   {
       printf("Nota do Grau A = %.2f \n", notaGrauAfinal);
   }
   else
   {
       printf("Alguma nota esta faltando\n");
   }

   case 9:
   notaGrauBFinal = (notaExerciciosgrauB*0.20)+(notaTrabalhograuB*0.30)+(notaProvagrauB*0.50);

   if(notaExerciciosgrauB >= 0 && notaTrabalhograuB >= 0 && notaTrabalhograuB >= 0)
   {
       printf("Nota do Grau B = %.2f \n", notaGrauBFinal);
   }
   else
   {
       printf("Alguma nota esta faltando\n");
   }

   case 10:
   notaFinal = (notaGrauAfinal*0.50)+(notaGrauBFinal*0.50);

   printf("Nota Final = %.2f \n", notaFinal);
   if(notaFinal >= 6)
   {
       printf("Voce esta de Ferias, Digite 0 para continuar: \n");
       scanf("%d", &continuar);
       if(continuar == 0)
       {
           system("cls");
           menu(escolha,continuar, notaExerciciograuA, notaTrabalhograuA, notaProvagrauA, notaGrauAfinal, notaExerciciosgrauB, notaTrabalhograuB, notaProvagrauB, notaGrauBFinal, notaFinal, notaGrauc, substituicao);

       }
   }
else
{
    printf("Sera necessario fazer a prova do Grau C, Digite 0 para informar a nota do Grau C: \n"):
    scanf("%d", &continuar);
    if(continuar == 0)
    {
        system("cls");
         menu(escolha,continuar, notaExerciciograuA, notaTrabalhograuA, notaProvagrauA, notaGrauAfinal, notaExerciciosgrauB, notaTrabalhograuB, notaProvagrauB, notaGrauBFinal, notaFinal, notaGrauc, substituicao);
    }
}
   case 11:
printf("Informe qual grau deseja substituir A/B: \n");
scanf("%c", &substituicao);

system("cls");

case 12:
printf("Informe a nota do Grau C: \n");
scanf("%f", &notaGrauc);

system("cls");

case 13:
if(substituicao == 'A' || substituicao == 'a')
{
    printf("Nota Final = %.2f", (notaGrauc*0.70)+ (notaTrabalhograuA*0.30));
    if(notaGrauc*0.70)+(notaTrabalhograuA*0.30) >= 6
    {
        printf("Va beber, Digite 0 para continuar: \n"):
        scanf("%d", &continuar);

        system("cls");
        menu(escolha,continuar, notaExerciciograuA, notaTrabalhograuA, notaProvagrauA, notaGrauAfinal, notaExerciciosgrauB, notaTrabalhograuB, notaProvagrauB, notaGrauBFinal, notaFinal, notaGrauc, substituicao);
    }
}

case 14:
printf("O programa foi fechado!");
return 0;
}

   }

   int main()
   {
       int escolha, continuar;
       float notaExerciciograuA, notaTrabalhograuA, notaProvagrauA, notaGrauAfinal, notaExerciciosgrauB, notaTrabalhograuB, notaProvagrauB, notaGrauBFinal, notaFinal, notaGrauc;
       char substituicao

    menu(escolha,continuar, notaExerciciograuA, notaTrabalhograuA, notaProvagrauA, notaGrauAfinal, notaExerciciosgrauB, notaTrabalhograuB, notaProvagrauB, notaGrauBFinal, notaFinal, notaGrauc, substituicao);

    return 0;   
   }
