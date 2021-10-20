#include<stdio.h>
#include<stdlib.h>
int main(void)
{
  //Declaração das variáveis
  float S, C, A, MD;
  int i;
  	for(i = 1; i <= 10; i++){
  		printf("Digite um numero: ");
  		scanf("%f",&A);	
  		if(A >= 0){
  			S += A;
  			C += 1;
		  } }
  MD = S / C;
  //Saída
  printf("A media e = %f\n",MD);
  system("pause");//pausa da tela somente para Windows
  return 0;//retorno da função main  
}
