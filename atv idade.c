#include<stdio.h>

main(){
 //Leia a idade e imprima se a pessoa é maior

 int idade;

 printf("digite a idade");
 scanf("%d",&idade);

 if(idade >= 18){
      printf("maior de idade ");

    }else{
       printf("menor de idade"); 
       }

 printf("\ncontinua a execucao...");

}