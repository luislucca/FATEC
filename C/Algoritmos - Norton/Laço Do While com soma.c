#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

int i, a, b, r;
	
do {
	scanf("%d", &a);
	scanf("%d", &b);
	
	r = a + b;
	
	printf("%d\n", r);
	
	i++;
} while (i < 20);
	
	return 0;
}
