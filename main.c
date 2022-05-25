#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Parede{
	float altura;
	float largura;
	int qtdjanelas;
	int qtdportas;
	
	
}parede;
	
struct Comodo{
	
	struct Parede paredes[4];
		
}comodo;

void clearr(){
	system("@cls || clear");
}

int calcTinta (struct Comodo comodo){
	float altura = comodo.paredes[0].altura + comodo.paredes[1].altura + comodo.paredes[2].altura + comodo.paredes[3].altura;
	float largura = comodo.paredes[0].largura + comodo.paredes[1].largura + comodo.paredes[2].largura + comodo.paredes[3].largura;
	float qtdportas = (comodo.paredes[0].qtdportas * 2.4) + (comodo.paredes[1].qtdportas * 2.4) + (comodo.paredes[2].qtdportas * 2.4) + (comodo.paredes[3].qtdportas * 2.4);
	float qtdjanelas = (comodo.paredes[0].qtdjanelas * 1.52) + (comodo.paredes[1].qtdjanelas * 1.52) + (comodo.paredes[2].qtdjanelas * 1.52) + (comodo.paredes[3].qtdjanelas * 1.52);
	float area = altura * largura;
	area = area - (qtdportas + qtdjanelas);
	
	
	
	printf("Qtd tinta: %.2f", area / 5);
	
	return (area / 5);
}



bool calculaAlturaMinima(float alturaParede, int qtdPortas) {
	printf("altura parede: %.2f\n", alturaParede);
	printf("qtdPortas: %d\n", qtdPortas);
	
	
	if ((qtdPortas >= 0 && ((alturaParede - 0.3) >= 1.9)) || qtdPortas == 0) {
		return true;
	}
	else return false;
}
	
bool calculaAreaMinima(float altura, float largura){
	float area = altura * largura;
	
	if(area >= 1 && area <= 15){
		return true;
	}
	else
		return false;
		
}
bool proporcaoArea(struct Parede parede){
	float areaParede = parede.altura * parede.largura;
	float areaPortas = 1.52 * parede.qtdportas;
	float areaJanelas = 2.40 * parede.qtdjanelas;

	
	 if ((areaPortas + areaJanelas) > (areaParede/2)){
	 	return false;
	 }
	else
		return true;
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
		scanf("%d",&comodo.paredes[i].qtdportas);
		
		printf("Qtd. janela (0 se nao houver): ");
		scanf("%d",&comodo.paredes[i].qtdjanelas);
		
		if (calculaAreaMinima(comodo.paredes[i].altura, comodo.paredes[i].largura)) {
			if (proporcaoArea(comodo.paredes[i]) == true)
				if(calculaAlturaMinima(comodo.paredes[i].altura, comodo.paredes[i].qtdportas) == true) {
					i++;
				}
				else {
//					clearr();
					
					printf("erro: altura da parede deve ser pelo menos 30cm da altura da portas!!");
				}
			else {
				clearr();
				
				printf("erro: a soma da area das portas e janelas nao pode ultrapassar 50%% da area da parede!!");
			}
			
		}
		else {
			clearr();
	
			printf("erro a parede tem que ter entre 1 e 15");
			
			
		}
		
	}
	
	calcTinta(comodo);
	
}
