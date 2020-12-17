/**
godkayaki_2020
https://github.com/Godkayaki
**/
#include <stdio.h>
#include <stdlib.h> // Cal per a srand() i rand()
#include <time.h>   // Cal per a time()

#define VALOR_MINIM 0
#define VALOR_MAXIM 2


void vLlavorAleatorietat(){
	srand( (unsigned) time(NULL) );
}

int nAleatori(int nMin, int nMax){
	return nMin + rand()%(nMax-nMin+1);
}

int main(){
	int n;
	
	vLlavorAleatorietat(); // Proveu-ho comentant-ho
	for (n = 0 ; n <= 14 ; n++)
		printf("%d\n",nAleatori(VALOR_MINIM,VALOR_MAXIM));
		
	return 0;
}
