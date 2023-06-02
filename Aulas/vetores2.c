#include<stdio.h>
#define tam 10
int main(){
    int c[4][3];
    

    printf ("\nDigite o seu nome\n");


    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 3; j++){
            c[i][j] = i*j;

        }
        
    }
    
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 3; j++){
            printf( "%d\t", c[i][j]);

        }
        printf( "\n");

        
    }
    

    return 0;
}
