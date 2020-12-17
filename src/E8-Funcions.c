/**
godkayaki_2020
https://github.com/Godkayaki
**/
#include <stdio.h> // per a printf() i scanf()

int nLlegeixEntradaUsuari(){// Retorna decimal introduït
	int n; // Un enter és un número decimal (sense decimals)
	
	scanf("%d",&n);
	
	return n;
}

void vEscriuPerPantallaNumero(int nD){// Escriu per pantalla un decimal
	printf("%d\n",nD);
}

void vEscriuPerPantallaText(char *sz){// Escriu per pantalla un text
	printf("%s\n",sz);
}

int main(){
	int nA,nB,nAux;
	
	vEscriuPerPantallaText("El valor a: ");
	nA = nLlegeixEntradaUsuari();
	vEscriuPerPantallaText("El valor b: ");
	nB = nLlegeixEntradaUsuari();
	
	nAux = nA;
	nA = nB;
	nB = nAux;
	
	vEscriuPerPantallaText("------------");
	vEscriuPerPantallaText("El valor a: ");
	vEscriuPerPantallaNumero(nA);
	vEscriuPerPantallaText("El valor b: ");
	vEscriuPerPantallaNumero(nB);
	
	return 0;
}
