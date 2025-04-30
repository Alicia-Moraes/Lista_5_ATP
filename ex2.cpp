#include<stdio.h>
#include<stdlib.h>

int a = 1, b = 2, c = 3; //variaveis globais

float y(float x){
    return(a * x * x + b * x + c); //calculo da funcao de segundo grau
}

int main(){
    printf("%.2f\n", y(2)); //imprime o resultado com x = 2

getchar();
return(0);
}