/**
godkayaki_2020
https://github.com/Godkayaki
**/
#include <stdio.h>

int bEsMajuscula(char cLletra){
	return (cLletra >= 'A' && cLletra <= 'Z');
}

int main(){
	char c;
	
	printf("Entreu un caràcter: ");
	scanf("%c",&c);
	if(bEsMajuscula(c)){
		printf("%c és majúscula\n",c);
	}else{
		printf("%c no és majúscula\n",c);
	}
	
	return 0;
}
