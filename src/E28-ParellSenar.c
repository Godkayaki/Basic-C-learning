/**
godkayaki_2020
https://github.com/Godkayaki
**/
#include <stdio.h>
#include <stdlib.h>

int main(){

	int x,y;
	int numeros[4][4];
	int numero;
	
	//numeros[4][10]
	
	for (x=0;x<4;x++){
		for (y=0;y<4;y++){
			printf ("Entra un numero: \n");
			scanf("%d", &numero);
			if (numero%2==0) {
				printf("Es parell\n");
				numeros[x][y]=numero;
			}else{
				printf("He demanat un numero parell, i has ingresat un senar\n");
				y--;
			}
		}
	}
	for (x=0;x<4;x++){
		for (y=0;y<4;y++){
			//printf("%d ",numeros[x][y]);
			if (numeros[x][y]<10) { 
				printf(" %d ",numeros[x][y]);
			}else{
				printf("%d ",numeros[x][y]);
			}
		}
	printf("\n");
	}

	return 0;
}
