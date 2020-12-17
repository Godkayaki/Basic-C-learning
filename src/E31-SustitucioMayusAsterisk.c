/**
godkayaki_2020
https://github.com/Godkayaki
**/
#include <stdio.h>
#define N 99

void vMajAsterisk(char *a){

    while (*a){
        if( *a >= 'A' && *a <= 'Z')
            *a = '*'; // De majúscula a minúscula
        a++;
    }
        
}

int main(){
	char szA[N]="L'escola de Jesuïtes El Clot"; 
    char szB[N] = "#JEClot";

    printf("szA: %s\n",szA);
    vMajAsterisk(szA);
    printf("szA: %s\n",szA);
    printf("szB: %s\n",szB);
    vMajAsterisk(szB);
    printf("szB: %s\n",szB);

    return 0;
}