 /******************************************************************
 Arquivos dos dados dos monstros

 ******************************************************************/

 //declaracao das funções
 void criarEspacamentoAtributosBatalha(int iQtdEspacamento);


   //OBS: PRA FUNCIONAR ESSE CÓDIGO TEM QUE CRIAR UM ARQUIVO DO TIPO HEADER

 // Estrutura dos atributos dos personagens
 struct Monstros {
        char iNome[16];
        int iPvMonstro;
        int iForcaMonstro;
        int iDefesa;
        int iVelocidade;
        int iNivel;



    };
    //Funções (metódos) exclusivos da estrutura de Personagem

    void exibirNomeMonstros(struct Monstros *monstros){
    printf("\n \n %s \n \n", monstros->iNome);


    }







 // Função de inicialização das personagens

void inicializar_Monstros(struct Monstros *monstros, int iTamanho){
   // função que tem finalidade  de inserir os atributos padrão de cada personagem . O atributo int iTamanho tem a função de atribuir quantos personagens vão ser utilizados
      int i=0;
     for(i=0;i<iTamanho;i++){
   // Iniciar alguns atributos padrão dos personagens
     monstros[i].iPvMonstro=20;
      monstros[i].iPvMonstro = monstros[i].iPvMonstro ;
      monstros[i].iForcaMonstro = 3;
      monstros[i].iDefesa = 5;
      monstros[i].iVelocidade = 3;
      monstros[i].iNivel=1;




          }
   }

   //Exibindo os atributos dos personagens

void exibindo_atributos_batalhaMonstros(struct Monstros *monstros, int iTamanho){
int i=0;
printf("------------------------------ATRIBUTOS------------------------------\n");

// loop de exibição dos nomes dos Monstros
for(i=0;i<iTamanho;i++){

printf("|  %s  ",monstros[i].iNome ); //personagens 1,2,3
criarEspacamentoAtributosBatalha(strlen(monstros[i].iNome)+1);// aqui da certo porque ele pega os caracteres com a função strlen e depois é possível adicionar números que representam a quantidades de espao que eu preciso para organizar o código
   }
   printf("\n");

   //loop de exibição do Nível dos personagens
  for(i=0;i<iTamanho;i++){

printf("| NV: %d  ",monstros[i].iNivel); //personagens 1,2,3
criarEspacamentoAtributosBatalha(monstros[i].iNivel+10);

   }

printf("\n");

   //loop de exibição dos pontos de vida dos personagens
  for(i=0;i<iTamanho;i++){

printf("| PV: %d  ",monstros[i].iPvMonstro); //personagens 1,2,3
criarEspacamentoAtributosBatalha(monstros[i].iPvMonstro+10);
   }

 printf("\n");


   //loop de exibição da velocidade dos personagens



printf("-------------------------------------------------------------------------- \n");


   }








