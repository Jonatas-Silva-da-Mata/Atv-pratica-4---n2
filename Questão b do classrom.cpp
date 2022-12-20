#include <stdio.h>
#include <locale.h>

char* numero_vf (int num){
	if(num >= 0){
		return "\nVerdadeiro.";
	}
	return "\nFalso.";
}

int main() {
	setlocale (LC_ALL, "Portuguese_Brazil");
	int num;
	printf("Digite um numero: ");
	scanf("%d", &num);
	char* b = numero_vf (num);
	printf("O numero é negativo? %s", b);
	
	return 0;
}
