#include <stdio.h>
#include <locale.h>

int fatorial (int n) {
	int fat = 1;
	for(int i=n; i>1; i--){
		fat = fat * i;
	}
	return fat;
}

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	int num, f;
	printf("Digite um numero: ");
	scanf("%d", &num);
	f =  fatorial(num);
	printf("O fatorial é: %d", f);
	
	return 0;
}
