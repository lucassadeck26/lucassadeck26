

//Função de retorno de número aleatório

int getNumeroAleatorioInteiro(int faixa, int randomico){
  //verificar se será utilizado o srand
  if(randomico==1){
  srand(time(NULL));

  }
  else if(randomico >0 && randomico<4){
  srand(rand());

  }

else if(randomico >4 && randomico<8){
  srand(10);

  }else{
  srand(100);

}

/*
  A parte abaixo é sobre a implementação do código, com a lógica de colocar o nome dos 3 personagens,
  só que podem ser quantos personagens  quiser

int iLetras;
int contPersonagens=0;

do{

do{
printf("Digite o nome do(a) pe rsonagem %d : ",i+1);
 scanf(" %s",personagens[i].iNome);
iLetras=strlen(personagens[i].iNome);

if(iLetras >15){
printf("\n Vc digitou um número inválido acima de 15 caracteres\n Digite novamente o nome da personagem\n");
}
// A maneira mais curta de fazer uma verificação de caracteres é através da função strlen()
// que é uma função que fala a quantidade de caracteres de uma string

  }while(iLetras > 15);
   i++;
  contPersonagens++;

  }while(contPersonagens<3);*/



}





