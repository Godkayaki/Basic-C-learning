/**
godkayaki_2020
https://github.com/Godkayaki
**/
#include <stdio.h>

int main(){

char cnom[20],csexe[10],cciutat[20];
int anys,meses;
double lfmetres,lfquilograms,lfgrams,lfmesura;
	
printf("Hola com et dius? ");
scanf("%s",cnom);

printf("Ets noi o noia? Jo soc un robot\n");
scanf("%s",csexe);

printf("Quants anys tens? ");
scanf("%d",&anys);

printf("Quant mesures d'alt en metres i centimetres? (punt per inficar la coma) ");
scanf("%lf",&lfmetres);

printf("Quant peses en quilograms? ");
scanf("%lf",&lfquilograms);

printf("On vius? ");
scanf("%s",cciutat);

meses=anys*12;
lfmesura=lfmetres*100;
lfgrams=lfquilograms*1000;
printf("Be %s; Tens %d mesos; Mesures %.2lf centimetres; Peses %.2lfgrams; I vius a %s", cnom,meses,lfmesura,lfgrams,cciutat);

return 0;
}
