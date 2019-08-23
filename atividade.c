#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

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
 
 
    minuto = tempo/60;
    tempo = tempo - (minuto*60);
    segundo = tempo;
  
 
    hora = minuto/60;
    minuto = minuto - (hora*60);
  
  printf("%02dH %02dMIN %02dS\n", hora,minuto,segundo );


  }


void q4() {
int valor,cem,cinquenta,vinte,dez,cinco,dois,um;
printf("Entre com um valor em real: ");
scanf("%d",&valor);
cem = valor/100;
valor = valor-(cem*100);

cinquenta = valor/50;
valor = valor-(cinquenta*50);

vinte = valor/20;
valor = valor-(vinte*20);

dez = valor/10;
valor = valor-(dez*10);

cinco = valor/5;
valor = valor-(cinco*5);

dois = valor/2;
valor = valor - (dois*2);

um = valor/1;
valor = valor - (um*1);

printf("%d Notas de cem, %d Notas de cinquenta, %d Notas de vinte, %d Notas de dez, %d Notas de cinco, %d Notas de dois, %d Notas de um\n",cem,cinquenta,vinte,dez,cinco,dois,um);

}

void q5() {
int num1, num2, num3;
printf("Entre com três numeros inteiros: ");
scanf("%d %d %d",&num1,&num2,&num3);

int numeros[3];
numeros[0] = num1;
numeros[1] = num2;
numeros[2] = num3;

for (int i = 0; i <= 2; i++)
  {
     for (int j = 0; j <= 2; j++)
      {
        if (numeros[i] < numeros[j])
          {

            int aux = numeros[i];
                 numeros[i] = numeros[j];
                      numeros[j] = aux;
                    }
                }
            }



  
printf("O maior número é: %d, e a ordem é: %d %d %d\n", numeros[2], numeros[0], numeros[1], numeros[2]);  

}




float afs(){
    float af;
printf("Entre com o valor da af: ");
scanf("%f",&af);
return af;
  }

void q6() {

  

float ap1,ap2,maior;
printf("Entre com duas notas: ");
scanf("%f %f",&ap1,&ap2);

if (ap1>=ap2)
{
  maior = ap1;
}
else
{
  maior = ap2;
}



if (ap1>=3 && ap2>=3)
{
  float media = (ap1+ap2)/2;
  if (media>=5)
  {
    printf("Aprovado com media: %02f\n",media);
  }
  else
  {
    float af = afs();
    float media = (af+maior)/2;
    if (media>=5)
    {
      printf("Aprovado com media: %02f\n",media);
    }
    else
    {
      printf("Reprovado com media: %02f\n",media);
    }
     

  }
    
}
else
{
  float af = afs();
  float media = (maior+af)/2;
  if (media>=5)
  {
    printf("Aprovado com media: %02f\n",media);
  }
  else
  {
    printf("Reprovado com media: %02f\n",media);
  }
  

}

}
void q7() {
float so,vo,a,t;
  printf("Entre com o espaço inicial, velocidade inicial, aceleração e tempo nessa ordem: ");
  scanf("%f %f %f %f",&so,&vo,&a,&t);
  float s = so + vo +((a*t*t)/2);
  float v = vo + (a*t);
  printf("O espaço final é: %.2f  e a Velocidade é: %.2f\n",s,v);
}

void q8() {
   srand(time(NULL));
  int opcaoUsu; 
  printf("Escolha uma opção: 1 para PEDRA, 2 para PAPEL e 3 para TESOURA: ");
  scanf("%d",&opcaoUsu);
  int valorAleatorio = rand()%3;
  

 if (opcaoUsu == 1 && valorAleatorio == 0 || opcaoUsu == 2 && valorAleatorio == 1 || opcaoUsu == 3 && valorAleatorio == 2)
 {
   printf("Empate\n");
 }
 else if (opcaoUsu == 1 && valorAleatorio == 2 || opcaoUsu == 2 && valorAleatorio == 0 || opcaoUsu == 3 && valorAleatorio == 1)
 {
   printf("Você ganhou\n");
 }
 else
 {
   printf("Você perdeu");
 }
  

}

void q9() {
  int lado1,lado2,lado3;
printf("Entre com os 3 lados de um triangulo: ");
scanf("%d %d %d",&lado1,&lado2,&lado3);

if (lado1<(lado2+lado3) && lado2<(lado1+lado3) && lado3<(lado1+lado2))
{
  if (lado1 == lado2 && lado2 ==  lado3)
  {
    printf("O triangulo é equilátero!\n");
  }
  else if (lado1>lado2 && lado2 == lado3 || lado2>lado1 && lado1 == lado3 || lado3>lado1 && lado1 == lado2 || lado1<lado2 && lado2 == lado3 || lado2<lado1 && lado1 == lado3 || lado3<lado1 && lado1 == lado2)
  {
    printf("O triangulo é isóceles\n");
  }
  else
  {
    printf("O triangulo é escaleno!\n");
  }
  
  
  
}
else
{
  printf("Os lados informados não formam um triangulo!!\n");
}



}

void q10() {
float operando1,operando2;
char operador;
printf("Entre com os dados na forma OPERANDO OPERADOR OPERANDO: ");
  scanf("%f %c %f", &operando1,&operador,&operando2);
switch (operador)
{
case '+':
  printf("%.2f\n",operando1+operando2);
  break;
case '-':
  printf("%.2f\n",operando1-operando2);
  break;
case '*':
  printf("%.2f\n",operando1*operando2);
  break;
case '/':
  if (operando2 == 0)
  {
    printf("Operação inválida\n");
      }
      else
      {
        printf("%.2f\n",operando1/operando2);
      }
      
 
default:
  break;
}

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