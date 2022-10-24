#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float numero1, numero2, resultado;
int opcao;

void saudacao(){
  printf("Bem-vindo(a)! \n");
}
void soma (){
  resultado=numero1+numero2;
  printf("Resultado:%1.f", resultado);
}

void subtracao(){
  resultado=numero1-numero2;
  printf("Resultado:%1.f", resultado);
}

void multiplicacao(){
   resultado=numero1*numero2;
  printf("Resultado:%1.f", resultado); 
}

void divisao(){
   resultado=numero1/numero2;
  printf("Resultado:%1.f", resultado); 
}

int main() {

  saudacao();

  printf("Número 1:\n");
  scanf("%f", &numero1);
  printf("Número 2:\n");
  scanf("%f", &numero2);

  printf("Escolha a opção desejada:\n");
  printf("1 - Adição\n");
  printf("2 - Subtração\n");
  printf("3 - Multiplicação\n");
  printf("4 - Divisão\n");
  scanf("%d", &opcao);

  switch (opcao){
    case 1:
      soma(numero1,numero2);
    break;

    case 2:
     subtracao(numero1,numero2);
    break;

    case 3:
      multiplicacao(numero1,numero2);
    break;

    case 4:
     divisao(numero1,numero2);
    break; 
  }
}