#include <stdio.h>
#include <locale.h>

void MultiploDeCinco(int v);

int main(){
	setlocale(LC_ALL, "Portuguese");
int n;
	printf("Informe um número: ");
	scanf("%i", &n);
MultiploDeCinco(n);
return(0);
}  

void MultiploDeCinco(int v){
	if (v % 5 == 0){
	printf("%i é múltiplo de 5!", v);
} else{
	printf("%i não é múltiplo de 5!", v);
}
}
