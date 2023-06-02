#include<stdio.h>
#define tam 3
int main(){

    int n[tam];
    int mmc;

    for (int i = 1; i <= tam; i++)
    {
       
        do
        {
            printf("\nInforme o número %d\n",i);
            scanf("%d",&n[i]);

            printf("\n%d",n[i]);


            

        } while (n[i]<0);
       
    }
    

    
}  

