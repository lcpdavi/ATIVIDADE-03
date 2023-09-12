#include<stdio.h>

main(){
 //Leia o salário e imprima se ganha mais que o salário mínimo;

 float salario, salarioMinimo = 1320;

 printf("digite o salario");
 scanf("%f",&salario);


 if(salario >= 1320){
      printf("o salario é maior ");
    }else{
      printf("o salario é menor que o salario minimo");
  }

 printf("\ncontinua a execucao...");


}