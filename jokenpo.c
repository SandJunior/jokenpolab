#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
  int escolha, cpu, nova;
  
 do{
  printf("Pedra, Papel e Tesoura (Jokenpo) vs CPU\n Faca a sua jogada:\n 1. Pedra\n 2. Papel\n 3. Tesoura\n 4. SAIR\n: ");
  scanf("%d", &escolha);
  
  if(escolha==4){
      exit(0);
  }
  
  srand(time(NULL));
  cpu=("d", 1 + rand()%3);
  switch(cpu){
	case 1:
		printf("CPU escolheu PEDRA\n");
    break;
	case 2:
		printf("CPU escolheu PAPEL\n");
    break;	
	case 3:
		printf("CPU escolheu TESOURA\n");
    break;
  }
  
   if((escolha==1&&cpu==3)||(escolha==2&&cpu==1)||(escolha==3&&cpu==2)){
      printf("VITORIA DO JOGADOR!\n");
  }
   if((escolha==1&&cpu==2)||(escolha==2&&cpu==3)||(escolha==3&&cpu==1)){
      printf("VITORIA DA CPU!\n");
  }
   if(escolha==cpu){
      printf("EMPATE!\n");
  }
  printf("Nova rodada?\n 1. SIM\n 2. NAO\n: ");
  scanf("%d", &nova);
  }while(nova==1);
}
