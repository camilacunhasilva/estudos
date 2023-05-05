#include<stdio.h>
int main(){
int ID;
	printf("\n\n Indique o ano que nasceu:");
	scanf("%d",&ID);
	if(ID>2002){
	printf("Invalido \n");
} 
else if (ID>1999 && ID<2003){	
	printf("Infantil \n");
} else if (ID>1996 && ID<2000){
	printf("Juvenil \n");
} else if(ID>1976 && ID<1998){
 printf("Adulto \n");
}else{
	printf("Veterano\n");
}

}




