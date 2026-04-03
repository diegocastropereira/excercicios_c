#include <stdio.h>
#include <stdlib.h>

int main() {
//variaveis
	int opcao;
	float grau_fahrenheit;
	float grau_convertido;
	int distancia_metros;
	int distancia_centimetros;
	float pesos_colombianos;
	float reais;
	
	printf("O que voce quer converter?\n ");
	printf("1 - graus \n 2 - distancia \n 3 - moedas \n");
	scanf ("%d", &opcao);
	
//o operador switch, seleciona a opcao no menu e converte, pode ser graus, distancia ou moedas
	switch (opcao){
		//converte temperatura
		case 1:
			printf("Digite os graus em fahrenheit: \n");
			scanf("%f", &grau_fahrenheit);
			grau_convertido = (grau_fahrenheit - 32) * 5/9;
			printf("Aqui esta o grau em celsius: %.1f\n", grau_convertido);
			break;
		
		//converte distancia
		case 2: 
			printf("Digite a distancia em metros: \n");
			scanf("%d", &distancia_metros);
			distancia_centimetros = distancia_metros * 100;
			printf("Aqui esta a distancia em centimetros:%d\n", distancia_centimetros);
			break;
		
		//converte moeda
		case 3: 
			printf("Digite o valor em pesos colombiano: \n");
			scanf("%f", &pesos_colombianos);
			reais = pesos_colombianos * 0.00141;
			printf("O valor em reais e: %.2f\n", reais);
			break;
			
		default:
			printf("OPCAO INVALIDA!");
		
	};
	return 0;
}
