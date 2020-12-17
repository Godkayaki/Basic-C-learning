/**
godkayaki_2020
https://github.com/Godkayaki
**/
#include <stdio.h> //printf i scanf 

void NetejaBuffer(){ while(getchar() != '\n'); }

int main(){

  char nom[30];
  int edat;

  printf("Si us plau, escriviu el vostre nom\n");
  scanf("%s",nom);
  printf("Ara podeu escriure la vostra edat\n");
  NetejaBuffer();
  scanf("%d",&edat);
  printf("Molt bé %s, vosté té %d anys\n",nom, edat);

return 0;

}
