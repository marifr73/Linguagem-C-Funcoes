#include <stdio.h>
#include <locale.h>

int fatorial (int n);

int main(){
	setlocale(LC_ALL, "Portuguese");
int n;
	printf("Informe um número: ");
	scanf("%i", &n);

	printf("O fatoria de %i é: %i", n, fatorial(n));
return(0);
}

int fatorial (int n){
	int fat = 1;
	for(int i = 1; i <= n; i++){
		fat *= i;
	}
	return fat;
}
