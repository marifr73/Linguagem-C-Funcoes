#include <stdio.h>
#include <locale.h>

void PI (int n);

int main(){
	setlocale(LC_ALL, "Portuguese");
int n;
	printf("Informe um número: ");
	scanf("%i", &n);
PI(n);
return(0);
} 

void PI (int n){
	if (n % 2 == 0){
		printf("O número é par!");
} else{
		printf("O número é impar!");
}
}
