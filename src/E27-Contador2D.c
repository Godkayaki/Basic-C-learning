/**
godkayaki_2020
https://github.com/Godkayaki
**/
#include <stdio.h>
#include <stdlib.h>

int main(){

	int x,y;
	int numeros[4][10];
	int compt=10;
	
	//numeros[4][10]
	
	for (x=0;x<4;x++){
		for (y=0;y<10;y++){
			numeros[x][y]=compt;
			compt=compt+1;
		}
	}
	for (x=0;x<4;x++){
		for (y=0;y<10;y++){
			printf("%d ",numeros[x][y]);
			numeros[x][y]=compt;
			compt=compt+1;
		}
	printf("\n");
	}

	return 0;
}
