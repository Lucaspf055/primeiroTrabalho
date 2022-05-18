#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Parede{
		
	float altura;
	float largura;
	int portas;
	int qtdjanelas;
	
}parede;
	
struct Comodo{
	
	struct Parede paredes[4];
		
}comodo;

void clearr(){
	system("@cls || clear");
}

bool calculaAreaMinima(float altura, float largura){
	float area = altura * largura;
	
	
	if(area >= 1 && area <= 15){
		return true;
	}
	else
		return false;
		
}
bool areaPortasJanelas(struct Parede parede){
	float area = portas* janela
}
int main (){
	int i =0;
	struct Comodo comodo;
	
	while(i < 4){
		printf("\nParede %d\n", i + 1);
		printf("Altura: ");
		scanf("%f",&comodo.paredes[i].altura);
		
		printf("Largura: ");
		scanf("%f",&comodo.paredes[i].largura);
		
		printf("Qtd. portas (0 se nao houver): ");
		scanf("%d",&comodo.paredes[i].portas);
		
		printf("Qtd. janela (0 se nao houver): ");
		scanf("%d",&comodo.paredes[i].qtdjanelas);
		
		if (calculaAreaMinima(comodo.paredes[i].altura, comodo.paredes[i].largura)) {
			
			i++;
		}
		else {
			clearr();
	
			printf("erro a parede tem que ter entre 1 e 15");
			
			
		}
		
	}
	
}
