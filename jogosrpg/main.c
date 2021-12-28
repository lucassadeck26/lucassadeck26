#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "personagem.h"
#include "funcoes.h"
#include "monstros.h"


int escolha_jogador,escolha_aliado,escolha_maquina1,escolha_maquina2;
 int confirmar;
 int vivo_jogador=1;
 int vivo_aliado=1;
int main()

{
int escolha;
struct Personagens personagens[3];
  struct Monstros monstros[3];


void batalhar();

    //  batalha de rpg
   do{
    printf(" deseja começar a batalha?\n caso queira digite [1]\n caso queira sair digite [2]");
     scanf("%d",&confirmar);



  if(confirmar==1){
  batalhar();

    }

 else if(confirmar==2){
  exit(0);


  }

  else{

  printf("vc digitou um número inválido, digite 1 ou 2");

    }

    }while(confirmar != 1 && confirmar!=2);  //Aqui fica o looping que continua até que tenha sido escolhido uma opção correta de número, ou seja 1 ou 2;








 return 0;

}




void batalhar(){
int i = 0;
  // Iniciar alguns atributos padrões
  struct Personagens personagens[3];
  struct Monstros monstros[3];

  // NOMES
  strcpy(personagens[0].iNome, "Lucaszão!");
   strcpy(personagens[1].iNome, "Fernandão");


          strcpy(monstros[0].iNome,"Goblin1");
          strcpy(monstros[1].iNome,"Goblin2");
           //Funções e métodos Inicializados do personagem
  inicializar_personagens(&personagens, 2);
   exibindo_atributos_batalha(&personagens,2);
  // exibirNomePersonagem(&personagens[0]);

   //Funções e métodos Inicializados do Monstro
   inicializar_Monstros(&monstros, 2);
     exibindo_atributos_batalhaMonstros(&monstros, 2);
   // exibirNomeMonstros(&monstro[0]);


   do{



   exibindo_atributos_batalha(&personagens,2);         // estava errando pois estava usando sempre a função de inicialização de personagem, sendo que não era pra ser desse jeito, era apenas para exibir os atributos de batalha

      exibindo_atributos_batalhaMonstros(&monstros, 2);


printf("---------------------------");
printf(" Escolha uma das opções abaixo \n[1] para atacar o goblin1 \n[2] para atacar o goblin2\n[3] para sair do jogo");
scanf(" %d",&escolha_jogador);

if(vivo_jogador==0){
escolha_jogador=4;

}
if(vivo_aliado==0){
escolha_jogador=4;

}


switch(escolha_jogador){
case 1:
monstros[0].iPvMonstro= monstros[0].iPvMonstro-personagens[0].iForcaJogador;
printf("%s causou %d de dano no goblin1 \n",personagens[0].iNome, personagens[0].iForcaJogador);
break;
case 2:
monstros[1].iPvMonstro= monstros[1].iPvMonstro-personagens[0].iForcaJogador;
printf("%s causou %d de dano no goblin2 \n",personagens[0].iNome, personagens[0].iForcaJogador);

break;
case 3:
exit(0);
case 4:
printf("\n");
default:
printf("vc digitou um valor incorreto e perdeu a vez!\n");
break;
}



// jogada máquina aliada
srand(time(NULL));
escolha_aliado= rand()%3;
switch(escolha_aliado){
case 1:
monstros[0].iPvMonstro= monstros[0].iPvMonstro-personagens[1].iForcaJogador;
printf("%s causou  %d de dano no goblin1 \n",personagens[1].iNome, personagens[1].iForcaJogador);
break;
case 2:
monstros[1].iPvMonstro= monstros[1].iPvMonstro-personagens[1].iForcaJogador;
printf("%s causou  %d de dano no goblin2 \n",personagens[1].iNome, personagens[1].iForcaJogador);

break;
case 3:
exit(0);
default:
printf("seu aliado errou o ataque!\n");
break;
}

// Jogada da máquina2

srand(time(NULL));
escolha_maquina2= rand()%3;
switch(escolha_maquina2){

case 1:
personagens[0].iPvJogador=personagens[0].iPvJogador-monstros[1].iForcaMonstro;

printf("O goblin2 causou %d de dano no jogador 1\n",monstros[1].iForcaMonstro);

break;

case 2:

personagens[1].iPvJogador=personagens[1].iPvJogador-monstros[1].iForcaMonstro;

printf("O goblin2 causou %d de dano no jogador 2\n",monstros[1].iForcaMonstro);
break;
default:
printf("o goblin2  perdeu a vez!!!!\n");
break;
}




//jogada da máquina1
srand(time(NULL));
escolha_maquina1= rand()%3;
switch(escolha_maquina1){

case 1:
personagens[0].iPvJogador=personagens[0].iPvJogador-monstros[0].iForcaMonstro;

printf("O goblin1 causou %d de dano no jogador 1\n",monstros[0].iForcaMonstro);

break;

case 2:

personagens[1].iPvJogador=personagens[1].iPvJogador-monstros[0].iForcaMonstro;

printf("O goblin1 causou %d de dano no jogador 2\n",monstros[0].iForcaMonstro);
break;
default:
printf("A maquina perdeu a vez!!!!");
break;
}




  // looping que o ocorre até o jogador ou o goblin ficar com pontos de vida menores ou iguais a zero

  if(monstros[0].iPvMonstro<=0){
     personagens[0].iXp=personagens[0].iXp+10;
      personagens[1].iXp=personagens[1].iXp+10;
   monstros[0].iPvMonstro=20;
   printf("\n o goblin1 morreu!!!\n");

  }

  if(monstros[1].iPvMonstro<=0){
  // ganho de experiencia dos jogadores
  personagens[0].iXp=personagens[0].iXp+10;
   personagens[1].iXp=personagens[1].iXp+10;
   //  o goblin volta a vida máxima inicial, pois seria outro goblin
   monstros[1].iPvMonstro=20;
   printf("\n o goblin2 morreu!!!\n");

  }

  if(personagens[0].iXp==30 && personagens[1].iXp==30 ){
  printf("---------------------------------");
  printf("parabéns, vc subiram para o nível 2");
  printf("---------------------------------");

  if(personagens[0].iPvJogador<=0){
  printf("Jogador 1 reviveu");
  vivo_jogador=1;
  }
  if(personagens[1].iPvJogador<=0){
  printf("Jogador 2 reviveu");
 vivo_aliado=1;
  }

  personagens[0].iNivel=2;
   personagens[0].iForcaJogador=5+3;
   personagens[0].iPvJogador=40+5;
   personagens[1].iNivel=2;
   personagens[1].iForcaJogador=5+3;
   personagens[1].iPvJogador=40+5;

  }

  if(personagens[0].iXp==300 && personagens[1].iXp==300){
    printf("---------------------------------");
  printf("parabéns, vc subiu para o nível 3");
  printf("---------------------------------");
  personagens[0].iNivel=3;
   personagens[0].iForcaJogador=23+3;
   personagens[0].iPvJogador=45+5;
   personagens[1].iNivel=3;
   personagens[1].iForcaJogador=23+3;
   personagens[1].iPvJogador=45+5;
   monstros[0].iPvMonstro=8;

  }if(personagens[0].iPvJogador<=0){
   printf("jogador 1 morreu");
   vivo_jogador=0;
  personagens[0].iPvJogador=0;


  }
  if(personagens[1].iPvJogador <=0){
   printf("jogador 2 morreu");
   personagens[1].iPvJogador=0;
  vivo_aliado=0;
      }

  if(personagens[0].iPvJogador <=0 && personagens[1].iPvJogador <=0  ) {
    printf("-----------------------\n");
  printf("vc perdeu!!! \n Game over");
   printf("-----------------------\n");
   exit(0);
  }


  // looping que o ocorre até que pelo menos um dos personagens alcançem o nível 3
  }while(personagens[0].iNivel <3 ||personagens[1].iNivel <3);

  printf("parabéns, vc zerou o jogo!!!");
}






