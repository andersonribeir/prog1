#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void q1() {
  #define pi 3.14
  int raio,volume;

  printf("Entre com o valor do raio da esfera em cm: \n");
  scanf("%d",&raio);
  while(raio<=0)
  {
  printf("Entre com o valor do raio da esfera em cm: \n");
  scanf("%d",&raio);
  }
  volume = (4*pi*(raio*raio*raio))/3;
  printf("%d\n", volume );

}

void q2() {

  float precoGalaoEUA,dolar,precoGalaoBR,precoLitroBR;
  

  printf("Entre com o preço do galao da gasolina nos EUA\n");
  scanf("%f",&precoGalaoEUA);
  printf("Entre com o valor do dolar\n");
  scanf("%f",&dolar);
  precoGalaoBR = precoGalaoEUA * dolar;
  precoLitroBR = precoGalaoBR / 3.7854;
  printf("Galao no Brasil: %f\n", precoGalaoBR );
  printf("Preço do litro no Brasil: %f\n", precoLitroBR);


}

void q3() {
  int tempo, hora,minuto,segundo = 0;
  printf("Entre com a quantidade de segundos transcorridos: \n");
  scanf("%d",&tempo);
 
  while(tempo>=60){
    minuto = tempo/60;
    tempo = tempo - (minuto*60);
    segundo = tempo;
  }
  while(minuto>=60)
  {
    hora = minuto/60;
    minuto = minuto - (hora*60);
  }
  printf("%02dH %02dMIN %02dS\n", hora,minuto,segundo );


  }


void q4() {
}

void q5() {
}

void q6() {
}

void q7() {
}

void q8() {
}

void q9() {
}

void q10() {
}


int main(void) {
  int n;
  printf("Digite o número da questão: ");
  scanf("%d", &n);
  
  switch(n) {
    case 1: q1(); break;
    case 2: q2(); break;
    case 3: q3(); break;
    case 4: q4(); break;
    case 5: q5(); break;
    case 6: q6(); break;
    case 7: q7(); break;
    case 8: q8(); break;
    case 9: q9(); break;
    case 10: q10(); break;
    default : break;
  }
  return 0;
}