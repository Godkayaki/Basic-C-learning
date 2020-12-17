/**
godkayaki_2020
https://github.com/Godkayaki
**/
#include <stdio.h>


int main(){
	int NI=3;
	int ValorU;
	int codi=8432;
	
	do{
		printf("Introdueix la contraseña: ");
		scanf("%d",&ValorU);
		if(ValorU != codi)
			NI=NI-1;
			printf("Error, et queden %d intents\n",NI);
		}while(NI>0 && ValorU!=codi);
		

	return 0;
}


	
