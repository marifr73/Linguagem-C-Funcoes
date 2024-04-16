#include <stdio.h>
#include <locale.h>

void PNN (int n);
int main(){
	setlocale(LC_ALL, "Portuguese");
int n;
	printf("Informe um número inteiro: ");
	scanf("%i", &n);
	PNN(n);
return(0);
}

void PNN (int n){
	if(n > 0) {
        printf("Positivo! \n");
    } 
	else if (n < 0) {
		printf("Negativo! \n");
    } 
	else{
		printf("Neutro!");
}
}
