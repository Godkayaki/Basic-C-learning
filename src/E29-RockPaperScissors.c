/**
godkayaki_2020
https://github.com/Godkayaki
**/
#include <stdio.h>

void vEsborraPantalla(){
	system("clear");
}

void vLlavorAleatorietat(){
	srand( (unsigned)time( NULL ) ); 
}

int nAleatori(int nMin, int nMax){
	return nMin + rand()%(nMax-nMin+1);
}

void vMenjaEnter(){
	char cAux;
	
	scanf("%c",&cAux);
}

int main(){
	char cU,cO,szP[3]={'R','P','S'};
	int nCops,i,nGuanyades=0;
	
	vEsborraPantalla();
	vLlavorAleatorietat();
	printf("Número de partides: ");
	scanf("%d",&nCops);
	vMenjaEnter();
	for( i = 0 ; i < nCops ; ){
		printf("Partida %d i %d cops guanyats\n",i+1,nGuanyades);
		cO = szP[nAleatori(0,2)];
		// Visualitzeu aquí el valor de c0
		printf("R P o S: ");
		scanf("%c",&cU);
		vMenjaEnter();
		if(cU == 'R' && cO == 'S'){
			i++; // Una partida més
			nGuanyades++;
		}
		if(cU == 'R' && cO == 'P'){
			i++; // Una partida més
		}
		if(cU == 'S' && cO == 'P'){
			i++; // Una partida més
			nGuanyades++;
		}
		if(cU == 'S' && cO == 'R'){
			i++; // Una partida més
		}
		if(cU == 'P' && cO == 'R'){
			i++; // Una partida més
			nGuanyades++;
		}
		if(cU == 'P' && cO == 'S'){
			i++; // Una partida més
		}
		printf("\n-------------------------------\n");
	}	
	printf("\n===============================\n");
	printf("%d partides i %d cops guanyats\n",i,nGuanyades);
	
	return 0;
}
