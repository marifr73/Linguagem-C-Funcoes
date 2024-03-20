#include <stdio.h>
#include <locale.h>

void idade (int n);

int main(){
	setlocale(LC_ALL, "Portuguese");
int n;
	printf("Informe sua idade: ");
	scanf("%i", &n);
idade(n);
return(0);
} 

void idade (int n){
	if (n >= 18){
		printf("Maior de idade!");
} else{
		printf("Menor de idade!");
}
}
