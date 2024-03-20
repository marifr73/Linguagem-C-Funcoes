#include <stdio.h>
#include <locale.h>

float volume (float c, float l, float a);

int main(){
	setlocale(LC_ALL, "Portuguese");
	float c, l, a;
	printf("Informe o comprimento: ");
	scanf("%f", &c);
	printf("Informe a largura: ");
	scanf("%f", &l);
	printf("Informe a altura: ");
	scanf("%f", &a);

	printf("O volume da caixa retangular é: %.2f\n", volume(c, l, a));
	return(0);
}

float volume (float c, float l, float a){
	float volume;
	volume = c*l*a;
	return(volume);
}
