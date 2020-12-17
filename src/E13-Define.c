/**
godkayaki_2020
https://github.com/Godkayaki
**/
#include <stdio.h>

#define TOTS_ELS_PUBLICS	'T'
#define ADULTS				'A'
#define JOVES				'J'
#define NENS				'M'
#define EDAT_ADULTS			18
#define EDAT_JOVES			16
#define EDAT_NENS			13

int main(){
	char cTipus;
	int nEdat;
	
	printf("Tipus de pel·lícula <T,M,J o A>: ");
	scanf("%c",&cTipus);
	printf("Edat: ");
	scanf(" %d",&nEdat);
	
	if(cTipus == TOTS_ELS_PUBLICS){
		printf("Amb %d anys pots entrar a veure la pel·lícula de categoria %c.\n",
				nEdat,cTipus);
	}else{
		if(cTipus == ADULTS){
			if(nEdat >= EDAT_ADULTS){
				printf("Amb %d anys pots entrar a veure la pel·lícula de categoria %c.\n",
						nEdat,cTipus);			
			}else{
				printf("Amb %d anys NO pots entrar a veure la pel·lícula de categoria %c.\n",
						nEdat,cTipus);
			}
		}else{
		if(cTipus == JOVES){
			if(nEdat >= EDAT_JOVES){
				printf("Amb %d anys pots entrar a veure la pel·lícula de categoria %c.\n",
						nEdat,cTipus);			
			}else{
				printf("Amb %d anys NO pots entrar a veure la pel·lícula de categoria %c.\n",
						nEdat,cTipus);
			}
		}else{
		if(cTipus == NENS){
			if(nEdat >= EDAT_NENS){
				printf("Amb %d anys pots entrar a veure la pel·lícula de categoria %c.\n",
						nEdat,cTipus);			
			}else{
				printf("Amb %d anys NO pots entrar a veure la pel·lícula de categoria %c.\n",
						nEdat,cTipus);
			}
		}else{
			printf("En aquest moment no t'entenc. Ho sento.\n");
		}
	}
		}
	}

	
	return 0;
}
