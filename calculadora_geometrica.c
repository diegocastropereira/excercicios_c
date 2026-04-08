#include <stdio.h>
#include <stdlib.h>

int main(){
	int opcao_forma;
	
	float pi = 3.14;
	float raio_circulo;
	float area_circulo;
	
	int base_triangulo;
	int altura_triangulo;
	int area_triangulo;
	
	int lado_quadrado;
	int area_quadrado;
	
	printf("Qual forma geometrica voce quer calcular a area? \n 1 - circulo \n 2 - triangulo \n 3 - quadrado \n");
	scanf("%d", &opcao_forma);
    
    switch (opcao_forma){
        
        case 1:
            printf("Digite o raio do circulo: \n");
            scanf("%f", &raio_circulo);
            area_circulo = pi * (raio_circulo * raio_circulo);
            printf("A area do circulo e: \n%.2f", area_circulo);
            break;
            
        case 2:
            printf("Digite a base do triangulo: \n");
            scanf("%d", &base_triangulo);
            printf("Digite a altura do triangulo: \n");
            scanf("%d", &altura_triangulo);
            area_triangulo = (base_triangulo * altura_triangulo) / 2;
            printf("A area do triangulo e: \n%d", area_triangulo);
            break;
            
        case 3:
            printf("Digite o lado do quadrado: \n");
            scanf("%d", &lado_quadrado);
            area_quadrado = (lado_quadrado * lado_quadrado);
            printf("A area do quadrado e: \n%d", area_quadrado);
            break;
            
        default:
            printf("Nenhuma opcao selecionada!\n");
    }
    
	return 0;
}	
