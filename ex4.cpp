#include<stdio.h>
#include<stdlib.h>

int eh_primo(int numero){
    if(numero <= 1){
        return 0; //numeros negativos nao sao primos
    }
    for(int i = 2; i < numero; i++){
        if( numero % i == 0){
            return 0; 
        }
        else return 1; //retorna 1 se for primo
    }
} 

int main(){
    int num;
    printf("Digite o numero para verificar se ele e primo: ");
    scanf("%d", &num);
    if(eh_primo(num)){ //se a funcao eh_primo for verdadeira imprime que o numero e primo
        printf("Sim, e primo");
    }
    else {
        printf("Nao e primo"); //imprime que nao e primo se a funcao for fasla
    }
    getchar();
    return 0;
}