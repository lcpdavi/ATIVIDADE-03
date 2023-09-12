#include<stdio.h>

main(){
 //Leia a altura e imprima se é maior que 1.8m

 float altura;

 printf("digite a altura");
 scanf("%f",&altura);

 if(altura >= 1.80){
      printf("maior que 1.80");

    }else{
        printf("menor ou igual a 1.80");
    }

}