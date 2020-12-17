/**
godkayaki_2020
https://github.com/Godkayaki
**/
#include <stdio.h> 
#include <stdlib.h> //system()

int main(){

    char a,b;

    system("cls");
    a=66;
    printf("La variable a conté la lletra %c\n",a); //%c mostra un caracter y %d mostra un numero decimal
    printf("El valor numéric de la variable a és %d\n",a);	//0b davant del numero en binari per representarlo
															//0x davant d'un numero per representar un numero en hexadecimal	
    a='A';	
    printf("\nLa variable a conté la lletra %c\n",a);
    printf("El valor numéric de la variable a és %d\n",a);

    a=a+10;
    b=a; 
    printf("\nLa variable a conté la lletra %c\n",a);
    printf("El valor numéric de la variable a és %d\n",a);
    printf("\nLa variable b conté la lletra %c\n",b);
    printf("El valor numéric de la variable b és %d\n",b);

    b='A'+2;
    printf("\nLa variable b conté la lletra %c\n",b);
    printf("El valor numéric de la variable b és %d\n",b);

    return 0;
}
