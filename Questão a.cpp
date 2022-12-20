#include <stdio.h>
#include <locale.h>

int soma (int n1, int n2) {
	return n1 + n2;
}

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	int numero1, numero2, r;
	
	printf("Digite um número: ");
	scanf("%d", &numero1);
	printf("Digite um segundo numero: ");
	scanf("%d", &numero2);
	r = soma(numero1, numero2);
	
	printf("O resultado é: %d", r);
	
	return 0;
}
