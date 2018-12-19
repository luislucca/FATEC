#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float num1, num2, num3, num4, media;
	
	printf("Digite o primeiro numero: ");
	scanf("%f", &num1);
	printf("Digite o segundo numero: ");
	scanf("%f", &num2);
	printf("Digite o terceiro numero: ");
	scanf("%f", &num3);
	printf("Digite o quarto numero: ");
	scanf("%f", &num4);
	
	media = (num1 + num2 + num3 + num4)/4;
	
	printf("A media dos numeros é: %.2f", media); 
	return 0;
}
