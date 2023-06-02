//leia uma matriz 3x3 e calcule a soma dos elementos que estão acima da diagonal 
//principal, o produto abaixo da diagonal  e subtraia a diferença
//dos dois

#include<stdio.h>
int main(){

    int matriz[3][3];

    for (int l = 0; l < 3; l++) {

        for(int c = 0; c < 3 ; c++){
            matriz[l][c] = l*c;

        }
        
    }

    //1 2 4
    //3 4 5
    //5 6 8 
    for (int l = 0; l < 3; l++) {

        for(int c = 0; c < 3 ; c++){
            printf("%d ",matriz[l][c]);

        }

        printf("%d ",matriz[l][c]);
        
    }
    

    return 0;
}







