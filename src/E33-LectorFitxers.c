/**
godkayaki_2020
https://github.com/Godkayaki
**/
#include <stdio.h>

void vAjuda(char* szNomArxiu){
	printf("Per exemple:\n%s arxiu.txt\n",szNomArxiu);
}

int main(int argc, char* argv[]){
	FILE *f;
	char car;
	
	if(argc != 2){
		vAjuda(argv[0]);
		return 1;
	}

   //procés de lectura
    printf("Lectura de l'arxiu\n");
    if((f=fopen(argv[1],"r"))==NULL){
        printf("Error a l'intentar obrir l'arxiu %s\n",argv[1]);
        return 1;
    }
    while((car=getc(f))!=EOF) 
		putchar(car);
    putchar('\n');
    fclose(f);

    return 0;
}
