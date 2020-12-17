/**
godkayaki_2020
https://github.com/Godkayaki
**/
#include <stdio.h>

int nNombredeCatalan(int a){
    if (a)
        return (2*(2*a-1)/(a+1))*nNombredeCatalan(a-1);
    return 1;
}

int main(){
	int nN = 0;

    do{
        printf("nNombredecatalan(%d) \t= %d\n",nN,nNombredeCatalan(nN));
    }while(nN++ <12);

    return 0;
}