/**
godkayaki_2020
https://github.com/Godkayaki
**/
#include <stdio.h> 

int main(){

	int n1,n2;
	
	printf("Introdueix el primer numero: ");
	scanf("%d",&n1);
	printf("Introdueix el darrer numero: ");
	scanf("%d",&n2);
	if (n1 < n2){
		while (n1 <= n2){
			printf("%d, ",n1);
			n1+=1;
		}
	}else
		while (n1 >= n2){
				printf("%d, ",n1);
				n1-=1;
	}
	printf ("FIN \n");

	return 0;
}
