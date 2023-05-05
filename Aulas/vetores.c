#include<stdio.h>
#define tam 9
int main(){
    int n[tam];

    n[0] = 45;
    n[7] = 78;

    printf("\nvetores 0 %d - 7 %d\n", n[0], n[7]);

    for (int i = 0; i < tam; i++){
        n[i] = i * 3.5;
        printf("\nvetor n[%d]: %d", i, n[i]);
    }
    

    return 0;
}
