#include<stdio.h>
int main(){
int x , y;

printf ("Primeiro valor:\n");
scanf ("%d",&x);

printf(" Segundo valor: \n");
scanf (" %d ", &y);

int resultado = x * y;

printf (" A multiplicacao de %d com %d eh igual a %d", x, y, resultado);

return 0;

}


