 /******************************************************************
 Arquivos dos dados dos personagens

 ******************************************************************/

 //declaracao das funções
 void criarEspacamentoAtributosBatalha(int iQtdEspacamento);


   //OBS: PRA FUNCIONAR ESSE CÓDIGO TEM QUE CRIAR UM ARQUIVO DO TIPO HEADER

 // Estrutura dos atributos dos personagens
 struct Personagens {
        char iNome[16];
        int iPvJogador;
        int iForcaJogador;
        int iDefesa;
        int iVelocidade;
        int iXp;
        int iNivel;



    };
    //Funções (metódos) exclusivos da estrutura de Personagem

    void exibirNomePersonagem(struct Personagens *personagem){
    printf("\n \n %s \n \n", personagem->iNome);


    }







 // Função de inicialização das personagens

void inicializar_personagens(struct Personagens *personagens, int iTamanho){
   // função que tem finalidade  de inserir os atributos padrão de cada personagem . O atributo int iTamanho tem a função de atribuir quantos personagens vão ser utilizados
      int i=0;
     for(i=0;i<iTamanho;i++){
   // Iniciar alguns atributos padrão dos personagens
    personagens[i].iPvJogador=15;
     personagens[i].iPvJogador = personagens[i].iPvJogador;
      personagens[i].iForcaJogador = 5;
      personagens[i].iForcaJogador=personagens[i].iForcaJogador;
      personagens[i].iDefesa = 5;
     personagens[i].iVelocidade = 3;
      personagens[i].iXp =0;
      personagens[i].iNivel = 1;




          }
   }

   //Exibindo os atributos dos personagens

void exibindo_atributos_batalha(struct Personagens *personagens, int iTamanho){
int i=0;
printf("------------------------------ATRIBUTOS------------------------------\n");

// loop de exibição dos nomes dos personagens
for(i=0;i<iTamanho;i++){

printf("|  %s  ",personagens[i].iNome ); //personagens 1,2,3
criarEspacamentoAtributosBatalha(strlen(personagens[i].iNome)+1);// aqui da certo porque ele pega os caracteres com a função strlen e depois é possível adicionar números que representam a quantidades de espao que eu preciso para organizar o código
   }
   printf("\n");

   //loop de exibição do Nível dos personagens
  for(i=0;i<iTamanho;i++){

printf("| NV: %d  ",personagens[i].iNivel); //personagens 1,2,3
criarEspacamentoAtributosBatalha(personagens[i].iNivel+15);

   }

printf("\n");

   //loop de exibição dos pontos de vida dos personagens
  for(i=0;i<iTamanho;i++){

printf("| PV: %d  ",personagens[i].iPvJogador); //personagens 1,2,3
criarEspacamentoAtributosBatalha(personagens[i].iNivel+14);
   }

 printf("\n");


   //loop de exibição da velocidade dos personagens
  for(i=0;i<iTamanho;i++){

printf("| Vel: %d  ",personagens[i].iVelocidade);   //personagens 1,2,3
criarEspacamentoAtributosBatalha(personagens[i].iNivel+14);

      }
printf("-------------------------------------------------------------------------- \n");
   }

   //funcao para criar o espaçamento e deixar os dados organizados
void criarEspacamentoAtributosBatalha(int iQtdEspacamento){
int i=0;

for(i=0; i<iQtdEspacamento;i++){
printf(" ");


   }

}

















