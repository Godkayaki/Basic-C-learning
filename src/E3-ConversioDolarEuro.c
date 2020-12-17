/**
godkayaki_2020
https://github.com/Godkayaki
**/
#include <stdio.h>

#define CONV_DOL_EUR 1.165700

int main(){
	float fDolar,fEuro;
	
	printf("Escriu una quantitat en dòlars: ");
	scanf("%f",&fDolar); // El símbol & és per a indicar a on és la variable a la RAM
	fEuro = fDolar * CONV_DOL_EUR;
	printf("$%.2f = %.2f€\n",fDolar,fEuro);
	
	return 0;
}
	
	
