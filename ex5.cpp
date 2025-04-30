#include <stdio.h>
#include <stdlib.h>

int calcula_imc(float peso, float altura){
    float imc = peso / (altura * altura); //cacula o imc
    if (imc < 18.5){
        return 0;
    }
    if (imc <= 24.9 ){
        return 1;
    }
    if (imc <= 29.9){
        return 2;
    }
    else{
        return 3;
    }
}

void imprima_imc(int calcula_imc){
    int resultado = calcula_imc; //chama a funcao e classifica o imc
    if(resultado == 0){
        printf("Magreza\n");
    }
    if(resultado == 1){
        printf("Saudavel\n");
    }
    if(resultado == 2){
        printf("Sobrepeso\n");
    }
    if(resultado == 3){
        printf("Obesidade\n");
    }
}

int main(){
    float peso, altura;
    printf("Digite o peso e a altura: ");
    scanf("%f%f", &peso, &altura);
    printf("O resultado do imc e: ");
    imprima_imc(calcula_imc(peso, altura)); //chama o resultado das duas funcoes 
    
    getchar();
    return (0);
}