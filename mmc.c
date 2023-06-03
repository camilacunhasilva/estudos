#include<stdio.h>
#define tam 3
int main(){

    int n[tam];
    int mmc = 1, maior;

    for (int i = 0; i < tam; i++)
    {
        do
        {
            printf("\nInforme o número %d\n",i + 1);
            scanf("%d",&n[i]);
        } while (n[i]<0);

        if(i != 0)
        {
            if(n[i-1] > n[i] )
            {
                maior = n[i];
                n[i] = n[i-1];
                n[i-1] = maior;
            }
        }
    }



    for (int j = 2; j <= n[2]; j++)
    {
        int mmcCompare2 = 1;
        for (int i = 0; i < tam; i++)
        {
            int mmcCompare = 1;
            while((n[i]%j) == 0) // if(n[i]%j == 0)
            {
                n[i] = n[i] / j;
                mmcCompare = mmcCompare * j;
            }

            if(mmcCompare > mmcCompare2 )
            {
                mmcCompare2 = mmcCompare;
            }
        }
        mmc = mmc * mmcCompare2; // mmc *= mmcCompare2;
    }

    printf("\nMMC: %d\n", mmc);
}  
