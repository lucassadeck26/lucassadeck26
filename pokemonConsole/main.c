#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<locale.h>
#include<SDl.h>
/*Meu pokemon será o chamander, ele vai ter hp=150 e vai possuir 4 ataques
lança chamas, bola de fogo, soco,arranhar
1- lança-chamas: tira 15 pontos, pode ser usado 3 vezes
2- Bola de fogo: tira 10 pontos: pode ser usado 5 vezes
3-soco: tira 3 pontos;
4-arranhar: tira 5 pontos, pode ser usado 7 vezes;
srand(time(NULL));
maquina= rand()%2+1;
switch(maquina)

O  computador;
o pokemon do computador vai ser o bulbussauro, e ele vai ter hp=25 e vai possuir 3 ataques
1-soco:2pts
2-arranhar:4pontos;
3-chicote de cipo: 7 pontos e só pode ser usado 3 vezes;

 Agora seria interessante criar o sistema de xp.

 E tem que criar também o sistema de evolucao do computador.


*/
int i=1,j=2;
int vida_jogador=150,vida_maquina=25;
int cont;
int xp_jogador=0,maquina_evolucao;
int jogador,maquina;
int cont;
void batalha_charmander();
int escolher,falta;
int score=0;
int soco_maquina=2,chute_maquina=3,chicote_maquina=5;
int soco_jogador=3,lanca_chamas=15,bola_de_fogo=10,arranhar=5;

main()

{

setlocale(LC_ALL,"Portuguese");
printf("---------------------------------------\n");
printf("%d Seja-bem vindo ao app pokemonConsole\n");
printf("---------------------------------------\n");
printf("Escolha um dos pokemons a seguir");
printf("Digite [1] para escolher charmander\n Digite [2] para escolher sair\n");
scanf("%d\n",&escolher);

switch(escolher){

case 1:
batalha_charmander();
break;

case 2:
exit(0);
break;

default:
printf("Opção inválida\n");
exit(0);
break;

}

}


void batalha_charmander()
{
              // Acredito que aqui tem que ser executado o comando do while, que permite que um trecho de código seja executado enquanto uma condição é verdadeira

do{


printf("SCORE: %d\n",score);

while(vida_jogador>0 && vida_maquina>0){


printf("%d Charmander VS bulbussauro %d\n",vida_jogador,vida_maquina);

printf("\n");
printf("Digite [1] para escolher soco\n");
printf("Digite [2] para escolher lança-chamas\n");
printf("Digite [3] para escolher bola de fogo\n");
printf("Digite [4] para escolher arranhar\n");
scanf(" %d",&jogador);


if(jogador==1){

vida_maquina=vida_maquina-soco_jogador;
printf("----------------------------\n");
printf("A máquina recebeu 3 de dado\n");
printf("----------------------------\n");
printf("A máquina está com %d de vida\n",vida_maquina);
printf("----------------------------\n");

if(vida_maquina<0){
vida_maquina=0;


}



}

else if(jogador==2){


vida_maquina=vida_maquina-lanca_chamas;
printf("----------------------------\n");
printf("A máquina recebeu %d de dado\n",lanca_chamas);
printf("----------------------------\n");
printf("A máquina está com %d de vida\n",vida_maquina);
printf("----------------------------\n");

if(vida_maquina<0){
vida_maquina=0;


}


}

else if(jogador==3){

vida_maquina=vida_maquina-bola_de_fogo;
printf("----------------------------\n");
printf("A máquina recebeu %d de dado\n",bola_de_fogo);
printf("----------------------------\n");
printf("A máquina está com %d de vida\n",vida_maquina);
printf("----------------------------\n");

if(vida_maquina<0){
vida_maquina=0;


}


}

else if(jogador==4){

vida_maquina=vida_maquina-arranhar;
printf("----------------------------\n");
printf("A máquina recebeu %d de  dano\n",arranhar);
printf("----------------------------\n");
printf("A máquina está com %d de vida\n",vida_maquina);
printf("----------------------------\n");

if(vida_maquina<0){
vida_maquina=0;


}


}
else{
printf("Digite um número válido\n");
printf("Vc perdeu a vez");

}


srand(time(NULL));
maquina= rand()%3;
switch(maquina){

case 0:
vida_jogador=vida_jogador-soco_maquina;
printf("----------------------------\n");
printf("A Máquina escolheu soco\n");
printf("----------------------------\n");

printf("O jogador recebeu %d de dano\n",soco_maquina);
printf("----------------------------\n");

printf("O jogador está com %d de vida\n",vida_jogador);
printf("----------------------------\n");

if(vida_jogador<0){
vida_jogador=0;


}


break;
case 1:
  vida_jogador=vida_jogador-chute_maquina;
printf("----------------------------\n");
printf("A Máquina escolheu chute\n");
printf("----------------------------\n");
printf("O jogador recebeu %d de dano\n",chute_maquina);
printf("----------------------------\n");
printf("O jogador está com %d de vida\n",vida_jogador);

if(vida_jogador<0){
vida_jogador=0;


}



break;

case 2:
vida_jogador=vida_jogador-chicote_maquina;


printf("----------------------------\n");
printf("A Máquina escolheu chicote de cipó\n");
printf("----------------------------\n");
printf("O jogador recebeu %d de dano\n",chicote_maquina);
printf("----------------------------\n");
printf("O jogador está com %d de vida\n",vida_jogador);



break;

default:
printf("Opção inválida");
break;
  }


  if(vida_jogador<=0){
printf("---------------\n");
printf("VC PERDEU!!!!!");
printf("---------------\n");
printf("GAME OVER!!!!");

printf("vc deseja jogar novamente!");





}
else if(vida_maquina<=0){
printf("----------------------------\n");
printf("VC GANHOU !!!!!");
printf("----------------------------\n");
printf("PARABÉNS!!!!");
printf("----------------------------\n");



}

if(vida_jogador<0){
vida_jogador=0;


}


  }






if(vida_jogador<=0){
printf("---------------\n");
printf("VC PERDEU!!!!!");
printf("---------------\n");


}
else if(vida_maquina<=0){
printf("----------------------------\n");
printf("VC GANHOU !!!!!");
printf("----------------------------\n");
printf("PARABÉNS!!!!");
printf("----------------------------\n");
i++;   // aqui é o momento que a máquina perde e fica mais forte a cada derrota
vida_maquina=25+i;
soco_maquina=soco_maquina+(int)(i/10);
chute_maquina=chute_maquina+(int)(i/10);
chicote_maquina=chicote_maquina+(int)(i/20);
score++;

xp_jogador++;

if(xp_jogador==3){
xp_jogador=0;
vida_jogador=vida_jogador+j;
soco_jogador=soco_jogador+(int)(j/10);
lanca_chamas=lanca_chamas+(int)(j/10);
bola_de_fogo=bola_de_fogo+(int)(j/10);
arranhar=arranhar+(int)(j/10);


}else{
falta=3-xp_jogador;
printf("Ainda falta(m) %d\n" ,falta);

}



}

cont++;


}




while(cont<=15);

int sair;

printf("Seu recorde foi de: %d\n",score);

printf("Gostaria de jogar novamente?\n Caso queira digite [1]\n  senão digite[2]");
scanf("%d",&sair);

switch(sair){

case 1:
cont=0;
vida_jogador=150;
score=0;
vida_maquina=25;
batalha_charmander();
break;
case 2:
exit(0);
break;
default:
printf("Opção inválida");
exit(0);

}

return;

}






























