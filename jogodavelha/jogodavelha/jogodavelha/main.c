#include <stdio.h>
#include <stdlib.h>

/*
JOGO DA VELHA
NO QUE ELE CONSISTE E SEU OBJETIVO?
ELE CONSISTE EM UMA MATRIZ 3X3 E A IDEIA É A DE CADA JOGADOR TER UM X OU BOLINHA
 PARA PREENCHER UM DOS 9 ESPAOÇOS
O JOGO É POR TURNOS OU SEJA DEVE ROLAR DOIS SWITCH CASES MAIS FUNÇÕES RANDOMICAS
E DEVE TER UM DO WHILE PRA FAZER O LOOPING ATÉ QUE UM DOS JOGADORES CUMPRA O OBJETIVO
DO JOGO, QUE É DE COMPLETAR 3 ESPAÇOS DE MANEIRA SEQUENCIAL DO TABULEIRO COM SEU SIMBOLO
OU SEJA EU TENHO O X, MEU X COMPLETA UMA DIAGONAL DO TABULEIRO POR EXEMPLO

1 PASSO- CRIAR MATRIZ 3X3 DE CARACTER(CHAR)QUE REPRESENTA O TABULEIRO DO JOGO
2 PASSO- criar as coordenadas x y que vão representar cada uma das posições no jogo
é o seguinte, o professor está ensinando como passar as coordenadas e ser exibido na tela um dos simbolos, ou x ou O, mas convenhamos que dessa forma
fica muito demorado e mais complicado pra algúem fazer, o mais interessante e depois pretendo implentar, seria que cada elemento  da matriz representasse
um número, por exemplo, o elemento tabuleiro [0] [0]=1, o tabuleiro [0[ [1]=2 e assim sucessivamente até chegar em 9
3 PASSO- aqui é feita uma função chamada valida_tabuleiro, pensando em todas as situações em que um dos jogadores vence. as situações são ganhar preenchendo uma linha, ganhar preenchendo uma coluna
ganhar preenchendo uma diagonal.Pra linha tem 3 possibilidades, pra coluna tem 3 possibilidades e pra diagonal tem 2 possibilidades.


*/

// funcao para limpar ou recomeçar o jogo
void limpa_tabuleiro(char tabuleiro [3] [3])
{

    int i;// representa as linhas do tabuleiro
    int j;// representa as colunas do tabuleiro

// os dois "for" que são utilizados para percorrer a matriz
    for(i=0; i<3; i++) // "for" que representa a linha
    {

        for(j=0; j<3; j++) // "for" que representa a coluna
        {

            tabuleiro [i][j]=' ';// colocar um espaço para representar um caracter, porque senão ele vai interpretar como sendo vazio

        }


    }




};


void desenha_tabuleiro( char tabuleiro [3][3])
{

    int i;

    int j;

    for(i=0; i<3; i++)
    {

        for(j=0; j<3; j++)
        {

            printf("%c|",tabuleiro[i][j]);

        }
        printf("\n");
    }

};

void jogada(char tabuleiro [3][3],char player) // funcao que recebe os parametros de matriz de tabuleiro e de char player para que seja feita apenas a operação de uma jogada // deixando assim o código mais legível e entendível
{

    while(1)
    {
        int x=0, y=0;
        printf("Entre com as coordenadas:");// entrada das coordenadas
        scanf(" %d %d",&x,&y);  // saida das coordenadas
        // elementos x e y que representam os coordenadas do tabuleiro


        if( (x<0 || y<0 ) || (x>2 || y>2 ) )  // verificação de coordenadas usada para verificar se o usuário digitou valores que são inexistentes na matriz
        {

            printf("Coordenadas inválidas\n");

        }



        else if(tabuleiro [x][y] ==' ') // verificação utilizada para observar se determinada posição no tabuleiro foi preenchida, caso não tenha sido preenchida, então será preenchida
        {

            tabuleiro[x][y]=player; // no inicio do jogo o player já começa com c1, que representa o X
            break;



        }
        else
        {
            printf(" posição não pode ser utilizada\n");




        }

    }

}


int valida_tabuleiro(char tabuleiro[3][3],char player)
{
    int i=0;
    int j=0;
    // validação das linhas

    for(i=0; i<3; i++)  //a ideia desse "for" é ele ir percorrendo de linha a linha até encontrar o correto
    {

        if(tabuleiro[i][0] != ' '&& tabuleiro[i][0] ==tabuleiro[i][1] && tabuleiro[i][0]== tabuleiro[i][2])
        {
            /*essa verificaão serve para o seguinte
                                                                                                                  uma verificação em cada uma das linhas pra ver se o valor de cada uma
                                                                                                                 dos elementos da matriz é igual, também tem que fazer uma verificação em
                                                                                                                  um valor qualquer se essse valor é diferente de um espaço em brano, como
                                                                                                                  todos são iguais a validação de um serve para os outros





                                                                                                                    */


        return 1;

        }


    }

    //validação das colunas

    for(j=0; j<3; j++)
    {

        if(tabuleiro[0][j]!= ' ' && tabuleiro[0][j] == tabuleiro[1][j]  && tabuleiro[1][j]== tabuleiro[2][j])
        {



           return 1;


        }



    }

    //validação das diagonais

    if( tabuleiro[0][0]!= ' '&& tabuleiro[0][0]==tabuleiro[1][1] && tabuleiro[1][1]==tabuleiro[2][2])
    {


        printf("jogador% venceu!!",player);

        return 1;



    }


    if(tabuleiro[0][0]!= ' '&& tabuleiro[0][2]==tabuleiro[1][1] && tabuleiro[1][1]==tabuleiro[2][0])
    {


    printf("jogador% venceu!!",player);


        return 1;

    }







    return 0;






}

int verica_empate(char tabuleiro[3][3])    //funcao com a finalidade de veficar a opção do jogo onde ocorreu empate entre os jogadores
{
    int j,i;

    for(i=0; i<3; i++)
    {

        for(j=0; j<3; j++)
        {

            if(tabuleiro[i][j] == ' ')
            {

                return 0;

            }


        }


    }


    return 1;

}

int main()
{
    char tabuleiro [3][3];
    char c1='X';
    char c2='O';
    int  vitorias_player1=0;
    int  vitorias_player2=0;
    int z=0;
    int player;

  printf("-------------------------------\n");
       printf(" PLACAR  \n");
        printf("JogadorX: %d X JogadorO: %d \n",vitorias_player1,vitorias_player2);
        printf("-------------------------------\n");

   limpa_tabuleiro(tabuleiro);

  desenha_tabuleiro(tabuleiro);
    do {
    while (z==0)
    {




        jogada(tabuleiro,player);
        desenha_tabuleiro(tabuleiro);
        if(valida_tabuleiro(tabuleiro, player) == 1)
        {


            printf("o player %c venceu\n",player);
            if(player==c1){
            vitorias_player1++;

             printf("-------------------------------\n");
       printf(" PLACAR  \n");
        printf("JogadorX %d  Jogador0 %d \n",vitorias_player1,vitorias_player2);
        printf("-------------------------------\n");
        limpa_tabuleiro(tabuleiro); // recomeçar o jogo




            }else if(player==c2){
            vitorias_player2++;

             printf("-------------------------------\n");
       printf(" PLACAR  \n");
        printf("Jogador 1 %d X Jogador 2 %d \n",vitorias_player1,vitorias_player2);
        printf("-------------------------------\n");
          limpa_tabuleiro(tabuleiro); // recomeçar o jogo


            }

            break;

        }
        else
        {
            if(verica_empate(tabuleiro) == 1)
            {
                printf("EMPATOU - FIM DE JOGO! \n");

                      printf("-------------------------------\n");
       printf(" PLACAR  \n");
        printf("Jogador X: %d X Jogador O: %d \n",vitorias_player1,vitorias_player2);
        printf("-------------------------------\n");


                limpa_tabuleiro(tabuleiro); // recomeçar o jogo
                break;


            }

            else if(player == c1)  // verificação se é a vez do player c1, que representa o X, se o player c1 já tiver jogado será a vez do player c2, senão vai    ser a vez do player c2   ;
            {
                player=c2;   // OBS: Essa verificação tem que ser realizada após o tabuleiro [x] [y]= player, porque nessa situação cada player só passa a vez se realmente tiver feito uma jogada correta

            }
            else
            {

                player=c1;

            }








            // passou 1 turno, a seguir será o segundo turno, e pra fazer a alternancia de turnos, em um turno tem que ser o 'X', e no outro tem ser o 'O'



        } // condicão que printa uma mensagem dizendo que esta posição já foi preenchida

                         //FIM DO LOOPING


    }

    }while(vitorias_player1<3 || vitorias_player2<3 );

    if(vitorias_player1==3 ){

    printf("O jogador 1 é o grande campeão");

    }else if(vitorias_player2<3 ){

        printf("O jogador 2 é o grande campeão");
    }



    printf("FIM DE JOGO!!!");





        return 0;

}










