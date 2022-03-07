//Inclusão de bibliotecas
#include <stdio.h>
#include <math.h>

//Definição de funções
float soma(float a, float b){
  return a+b;}
float subtracao(float a, float b){
  return a-b;}
float multiplicacao(float a, float b){
  return a*b;}
float divisao(float a, float b){
  return a/b;}
float raiz_n(float x, float n){
  return pow(x,1/n);}
float potencia_n(float exp, float pot){
  return pow(exp,pot);}
float seno(float ang_graus){
  return sin(ang_graus*2*M_PI/180);}
float cosseno(float ang_graus){
  return cos(ang_graus*2*M_PI/180);}

// Declaração de variaveis globais
float a;
float b;
int option;

//Programa principal
int main (int argc, char *argv[]){
while(1){
  printf("\n** Calculadora V1.0 **\n\n");
  printf("Para utilizar a calculadora, digite uma das opcoes abaixo.\n");
  printf("\t 1 - Soma\n");
  printf("\t 2 - Subtração\n");
  printf("\t-1 - Sair\n");
  printf("Digite uma opcao: ");
  scanf("%i",&option);
  switch(option){
    case 1:
      printf("\nSoma\n");
      printf("Digite dois valores (a+b): ");
      scanf("%f+%f",&a,&b);
      printf("%.2f + %.2f = %.2f\n",a,b,soma(a,b));
      goto Cont;
      break;
    case 2:
      printf("\nSubtracao\n");
      printf("Digite dois valores (a-b): ");
      scanf("%f-%f",&a,&b);
      printf("%.2f - %.2f = %.2f\n",a,b,subtracao(a,b));
      goto Cont;
      break;
    case -1:
      printf("Saindo...\n");
      goto Break;
      break;
    default:
      printf("Digite uma opcao valida!\n");
      goto Cont;
      break;
  }
  Cont: continue;
  Break: break;
}

return 0;
}