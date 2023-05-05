#include<stdio.h>
int main(){

    int i = 0;
    while(i < 10){
        printf("\nElton %d Camila\n", i);
        i = i + 2; //i+=2;
    }

    for (int j = 0; j < 10; j+=2){
        printf("\nElton %d Camila\n", j);
    }
    

    return 0;
}
