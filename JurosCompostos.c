/* CRIE O FLUXOGRAMA E O PROGRAMA DE CALCULO DE JUROS COMPOSTOS

TELA

*** CALCULA JUROS COMPOSTOS ***

DADOS DE ENTRADA
VL -> VALOR PRESENTE
N   -> PERIODO EM MESES
I     -> TAXA DE JUROS

DADOS DE SAIDA
VF  -> VALOR FUTURO
 */
#include<stdio.h>
int main(){

    float vp,tj,vf,pm;

    printf("\n****Calculo de Juros Compostos****\n");

    printf("\nValor Presente\n");
    scanf("%f",&vp);

    printf("\nPeríodo em Meses\n");
    scanf("%f",&pm);

    printf("\nTaxa de Juros\n");
    scanf("%f",&tj);

    tj=tj/100;

    tj=1+tj;

    vf=tj;
    printf("%f",tj);

    for (int i = 0; i < pm-1; i++);
    {
        vf=vf*tj;
        printf("\n%f",vf);
    }
    vf=vp*vf;
    
    

    printf("Valor Futuro : %.2f", vf);







    return 0;

}

