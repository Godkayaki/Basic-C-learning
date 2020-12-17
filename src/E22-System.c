/**
godkayaki_2020
https://github.com/Godkayaki
**/
#include <stdio.h>
#include <stdlib.h> 

#define LINUX

#ifndef TRUE
	#define TRUE 1
#endif
#ifndef FALSE
	#define FALSE 0
#endif

void vMenu(){
   system("clear");
   printf("Feu una selecció:\n\n\n");
   printf("a) Executa l'exercici 1 compilat en C\n\n");
   printf("A) Visualitza el codi de l'exercici 1\n\n");
   printf("b) Executa l'exercici 2 interpretat en python\n\n");
   printf("B) Visualitza el codi de l'exercici 2\n\n");
   printf("c) Executa l'exercici 4 compilat en C\n\n");
   printf("C) Visualitza el codi de l'exercici 4\n\n");
   printf("d) Executa l'exercici 5 interpretat en python\n\n");
   printf("D) Visualitza el codi de l'exercici 5\n\n");
   printf("e) Visualitza el codi de l'exercici 6\n\n");
   printf("x) sortir\n\n");
   printf("\n\n Seleccioneu una opció: ");
}

void vGestionaOpcio(char c){
	switch(c){
		case 'a':
			system("./ex01");
			break;
			
		case 'A':
			system("cat ex01.c");
			break;
			
		case 'b':
			system("python3 ex02.py");
			break;
		
		case 'B':
			system("cat ex02.py");
			break;
		
		case 'c':
			system("./ex04");
			break;
			
		case 'C':
			system("cat ex04.c");
			break;
			
		case 'd':
			system("python3 ex05.py");
			break;
			
		case 'D':
			system("cat ex05.py");
			break;
		
		case 'e':
			system("cat ex06.c");
			break;
       
		case 'x':
			printf("Bon viatge!\n");
				 break;
	}
	printf("\n");
}

int bCondicioCorrecta(char c){
	int bRetorno = FALSE;
	switch(c){
       case 'a':
       case 'A': 
       case 'b':
       case 'B': 
       case 'c':
       case 'C': 
       case 'd':
       case 'D': 
       case 'x':
       case 'X': bRetorno = TRUE;
				 break;
	}
	return bRetorno;
}

char cMenuDeSeleccio(){
	char cSel;

	do{
		vMenu();
		scanf("%c",&cSel);
	}while(!bCondicioCorrecta(cSel));
	
	return cSel;
}

int main(){
	vGestionaOpcio( cMenuDeSeleccio() );
}
