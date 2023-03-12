#include <stdio.h>
int main(void){
	char var_name[20];
	printf("Diga seu nome? ");
	scanf("%s", var_name);
	printf("Bem vindo %s!\n", var_name);
	return 0;
}
