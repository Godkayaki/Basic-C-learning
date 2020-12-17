/**
godkayaki_2020
https://github.com/Godkayaki
**/
#include <stdio.h>
#include <stdlib.h>

void vOpcio(char cN){
    printf("Ha seleccionat l'opció %c\n",cN);
}

void vMenu(){
   system("clear");
   printf("Exemple de menú\n\n\n");
   printf("1. Descripció selecció 1\n\n");
   printf("2. Descripció selecció 2\n\n");
   printf("3. Descripció selecció 3\n\n");
   printf("4. Descripció selecció 4\n\n");
   printf("esc. sortir\n\n");
   printf("\n\n Seleccioneu una opció...");
}

void vGestionaOpcio(char c){
	switch(c){
       case '1':
       case '2':
       case '3':
       case '4':
            vOpcio(c);
            break;
       case 27:
            //sortida
            break;
       default:;
       //en aquest cas no hi ha possibilitat d'un altre cas
       //ja que la senténcia do...while comprova que l'entrada
       //es trobi entre 1 i 4.
	}
}

char cMenuDeSeleccio(){
	char cSel;

	do{
		vMenu();
		//cSel=getc(stdin);
		scanf("%c",&cSel);
	}while((cSel<'1' || cSel>'4')&&cSel!=27); //esc=ASCII 27
	
	return cSel;
}

int main(){

	vGestionaOpcio( cMenuDeSeleccio() );

	return 0;
}


