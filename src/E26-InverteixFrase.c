/**
godkayaki_2020
https://github.com/Godkayaki
**/
#include <stdio.h>

#define MOLT 99

void vIntercanvia(char *x, char *y){
	char cAux;

	cAux = *x;
	*x = *y;
	*y = cAux;
}

void vInverteixFrase(char *sz){
	char *pP,*pF;
	
	pP = pF = sz;
	while(*pF)
		pF++;
	pF--; // Al bucle ha arribat al '\0' i vull l'anterior
	
	while(pF > pP){
		vIntercanvia(pP,pF); // Malgrat no duguin & també són adreces
		pF--;pP++;
	}
}

int main(){
	char sz[MOLT];
	
	printf("Frase (màx %d caràcters sense accents): ",MOLT-1);
	scanf("%[^\n]",&sz[0]); // igual que scanf("%[^\n]",sz);
	printf("Has dit \"%s\"\n",sz);
	vInverteixFrase(sz);
	printf("A l'inrevès \"%s\"\n",sz);

	return 0;
}
