/* Dada uma sequência de n valores 
inseridos pelo usuário, com n>2, 
faça um programa que
devolva a média dos valores ímpares 
e a soma dos valores pares. */

#include<stdio.h>
int main(){
    int q, n, i = 0, somaPares = 0, somaImpares = 0;

    printf("\nsoma dos valores pares e media dos valores ímpares\n\n");

    printf("\ninsira quantidade de numeros");
    scanf("%d", &q);

    printf("\ninsira os numeros\n");
    
    int j = 0;
    while(j < q){
        j++;
        scanf("%d", &n);
        if(n%2 == 0){
            somaPares = somaPares + n; //somaPares += n;
        }else{
            somaImpares = somaImpares + n; //somaImpares += n;
            i++; //i = i + 1;
        }
    }

    printf("\nSoma dos pares: %d\n", somaPares);
    printf("\nmedia dos impares: %d\n", somaImpares/i);

    return 0;
}
