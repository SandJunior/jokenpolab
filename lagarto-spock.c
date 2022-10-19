#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
  int escolha, cpu, nova;

 do{
  printf("Pedra, Papel, Tesoura, Lagarto-Spock vs CPU\n Faca a sua jogada: \n 1. Pedra\n 2. Papel\n 3. Tesoura\n 4. Lagarto\n 5. Spock\n 6. SAIR\n: ");
  scanf("%d", &escolha);
  
  if(escolha==6){
      exit(0);
  }

  srand(time(NULL));
  cpu=("d", 1 + rand()%5);
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
     case 4:
	   printf("CPU escolheu LAGARTO\n");
     break;
     case 5:
           printf("CPU escolheu SPOCK\n");
     break;
  }

   if((escolha==1&&cpu==3)||(escolha==1&&cpu==4)){
      printf("VITORIA DO JOGADOR!\n");
  }
   if((escolha==2&&cpu==1)||(escolha==2&&cpu==5)){
      printf("VITORIA DO JOGADOR!\n");
  }
   if((escolha==3&&cpu==2)||(escolha==3&&cpu==4)){
      printf("VITORIA DO JOGADOR!\n");
  }
   if((escolha==4&&cpu==5)||(escolha==4&&cpu==2)){
      printf("VITORIA DO JOGADOR!\n");
  }
   if((escolha==5&&cpu==3)||(escolha==5&&cpu==1)){
      printf("VITORIA DO JOGADOR!\n");
  }	  
   if((escolha==1&&cpu==2)||(escolha==1&&cpu==5)){
      printf("VITORIA DA CPU!\n");
  }
   if((escolha==2&&cpu==3)||(escolha==2&&cpu==4)){
      printf("VITORIA DA CPU!\n");
  }
   if((escolha==3&&cpu==1)||(escolha==3&&cpu==5)){
      printf("VITORIA DA CPU!\n");
  }
   if((escolha==4&&cpu==3)||(escolha==4&&cpu==1)){
      printf("VITORIA DA CPU!\n");
  }
   if((escolha==5&&cpu==2)||(escolha==5&&cpu==4)){
      printf("VITORIA DA CPU!\n");
  }
   if(escolha==cpu){
      printf("EMPATE!\n");
  }
  printf("Nova rodada?\n 1. SIM\n 2. NAO\n: ");
  scanf("%d", &nova);
  }while(nova==1);
}
