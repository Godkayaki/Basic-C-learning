/**
godkayaki_2020
https://github.com/Godkayaki
**/
#include <stdio.h> 
#include <math.h>

double mitjaa(double lfA,double lfB,double lfC){ //mitjana aritmetica
	return ((lfA+lfB+lfC)/3);	
}	

double mitjag(double lfA,double lfB,double lfC){  //mitjana geometrica
	return  pow((lfA*lfB*lfC),1./3);
}

//double var(double,double,double); //varianca

int main(){
	double a,b,c;
	
	printf("Introdueix a, b i c: ");
	scanf("%lf %lf %lf",&a,&b,&c);
	printf("Mitjana aritmètica de %.2lf, %.2lf i %.2lf és %.4lf\n",a,b,c,mitjaa(a,b,c));
	
	printf("Mitjana geometrica de %.2lf, %.2lf i %.2lf és %.4lf\n",a,b,c,mitjag(a,b,c));
	
	return 0;
}
