/**
godkayaki_2020
https://github.com/Godkayaki
**/
#include<stdio.h>
#include<stdlib.h>

void vOpcio1(){
    printf("Ha seleccionat la primera opció\n");
}

void vOpcio2(){
    printf("Ha seleccionat la segona opció\n");
}

void vOpcio3(){
    printf("Ha seleccionat la tercera opció\n");
}

void vOpcio4(){
    printf("Ha seleccionat la quarta opció\n");
}

int main(){
   char cSel;

   system("clear");
   printf("Exemple de menú\n\n\n");
   printf("1. Descripció selecció 1\n\n");
   printf("2. Descripció selecció 2\n\n");
   printf("3. Descripció selecció 3\n\n");
   printf("4. Descripció selecció 4\n\n");
   printf("esc. sortir\n\n");
   printf("\n\n Seleccioneu una opció...");
   do{
       cSel=getc(stdin);
   }while((cSel<'1' || cSel>'4')&&cSel!=27); //esc=ASCII 27

   switch(cSel){
       case '1':
            vOpcio1();
            break;
       case '2':
            vOpcio2();
            break;
       case '3':
            vOpcio3();
            break;
       case '4':
            vOpcio4();
            break;
       case 27:
            //sortida
            break;
       default:;
       //en aquest cas no hi ha possibilitat d'un altre cas
       //ja que la senténcia do...while comprova que l'entrada
       //es trobi entre 1 i 4.
    }
    
	return 0;
}


