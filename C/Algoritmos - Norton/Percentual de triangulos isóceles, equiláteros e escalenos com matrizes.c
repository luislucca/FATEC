#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int isoceles = 0, equilateros = 0, escalenos = 0, x;
	float aresta[10][3], percentIso, percentEqui, percentEsca;
	
	for(x = 0; x < 10; x++){
		printf("Insira a primeira aresta do triangulo %d: ", x + 1);
		scanf("%f", &aresta[x][0]);
		printf("Insira a segunda aresta do triangulo %d: ", x + 1);
		scanf("%f", &aresta[x][1]);
		printf("Insira a terceira aresta do triangulo %d: ", x + 1);
		scanf("%f", &aresta[x][2]);
		
		if (aresta[x][0] == aresta[x][1] && aresta[x][2] == aresta[x][1]){
			equilateros++;
		}
		
		if (aresta[x][0] == aresta[x][1] && aresta[x][0] != aresta[x][2]){
			isoceles++;
		} else {
			if (aresta[x][0] == aresta[x][2] && aresta[x][0] != aresta[x][1]){
				isoceles++;
			} else {
				if (aresta[x][2] == aresta[x][1] && aresta[x][0] != aresta[x][2]){
					isoceles++;
				}
			}
		}
		
		if (aresta[x][0] != aresta[x][1] && aresta[x][0] != aresta[x][2]){
			if (aresta[x][1] && aresta[x][2]){
				escalenos++;
			}
		}
	}
	
	percentIso = (isoceles * 100) / 10;
	
	percentEqui = (equilateros * 100) / 10;
	
	percentEsca = (escalenos * 100) / 10;
	
	printf("\n\nO percentual de triangulos isoceles, equilateros e escalenos e, respectivamente, de: "
	"%.2f , %.2f, %.2f.", percentIso, percentEqui, percentEsca);
	return 0;
}
