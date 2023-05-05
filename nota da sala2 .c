
#include<stdio.h>
int main(){
	int nt [4],i,media,soma=0;
	printf("\n\n Digite a nota do aluno: ");
	i=0;
	do {printf("\nInsira a nota %d do bimestre :\n",i+1);
		scanf ("%d", &nt[i]);
		soma = soma + nt[i];
		i++;
		printf ("\nsoma : %d\n",soma);
	
		
	}while (i < 4);
		
	media = soma/4;
	printf ("media: %d ",media);

	if(media >= 7){
		printf("\nAprovado\n");
	}else{
		printf("\nReprovado\n");
	}

return 0;
}

