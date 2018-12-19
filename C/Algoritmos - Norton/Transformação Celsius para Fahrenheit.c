#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float tempC,tempF;
	
	printf("Digite a temperatura em graus Celsius: ");
	scanf("%f", &tempC);
	
	tempF = (9 * tempC + 160) / 5;
		
	printf("\nA temperatura digitada, convertida para Fahrenheit e: %.2f", tempF);
		return 0;
}
