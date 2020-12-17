/**
godkayaki_2020
https://github.com/Godkayaki
**/
#include <stdio.h>

void NetejaBuffer(){
	while (getchar() != '\n');
}

int comparaCadena(char p1[], char p2[]){
	int i = 0;
	
	while (p1[i] != '\0'){
		if (p2[i] != p1[i]) return 0;
		i++;
	}
	if (p2[i] != p1[i]) return 0; // Controlem si és més llarg
		return 1;
}

int main(){
	char paraula1[40] = "Desenvolupament d'Aplicacions Web";
	char paraula2[40];
	int x = 0;
	
	while(x==0){
		printf("Introdueix una paraula: ");
		scanf("%[^\n]", paraula2);
		NetejaBuffer();
		
		if(comparaCadena(paraula1, paraula2)){
			printf("Son iguals\n");
			x = 1;
		}else printf("No son iguals\n");
	}
	
	return 0;
}
