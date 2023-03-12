#include <stdio.h>
int main (){

    int mes;
    float salario;
    int resultado,resto;
    printf("quantidade de meses trabalhados para viagem\n insira seu salario\n");
    scanf("%f", &salario);
    printf("valor do salario R$: %0.2f\n", salario);
    resultado = 22000/salario;
    resto = 22000%(int)salario;
    if(resto == 0){
        printf("meses trabalhados para viagem: %d\n", resultado);

    }else {
        printf("meses trabalhados para viagem: %d\n", resultado+1);

    }


    return 0;


}
