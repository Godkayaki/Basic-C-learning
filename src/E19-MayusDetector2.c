/**
godkayaki_2020
https://github.com/Godkayaki
**/
#include <stdio.h>

int bEsMajuscula(char cLletra){
	return (cLletra >= 'A' && cLletra <= 'Z');
}

int bEsMinuscula(char cLletra){
	return (cLletra >= 'a' && cLletra <= 'z');
}

int main(){
	char c;
	
	printf("Entreu un caràcter: ");
	scanf("%c",&c);
	if( bEsMajuscula(c) ){
		printf("%c és majúscula\n",c);
	}else{
		if( bEsMinuscula(c) ){
			printf("%c és minúscula\n",c);
		}else{
			printf("%c no és majúscula ni minúscula\n",c);
		}
	}
	
	return 0;
}
