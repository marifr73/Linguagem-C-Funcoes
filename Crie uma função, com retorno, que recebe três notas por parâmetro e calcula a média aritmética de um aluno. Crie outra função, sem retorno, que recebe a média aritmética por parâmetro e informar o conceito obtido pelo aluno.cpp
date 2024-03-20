#include<stdio.h>
#include<locale.h>

float media (float a, float b, float c);
void conceito (float media);

int main(){
	setlocale(LC_ALL, "Portuguese");
float a, b, c;
	printf("Informe a primeira nota: ");
scanf("%f", &a);
	printf("Informe a segunda nota: ");
scanf("%f", &b);
	printf("Informe a terceira nota: ");
scanf("%f", &c);

	printf("A média das 3 notas é: %.2f\n", media(a, b, c));
	conceito(media(a, b, c));
return(0);
}

float media (float a, float b, float c){
	float media;
	media = (a+b+c)/3;
return(media);
}

void conceito (float media){
	if (media >= 9){
		printf("Conceiro: A");
}
	else if((media >= 7) && (media < 9)){
		printf("Conceiro: B");
}
	else if((media >= 6) && (media < 7)){
		printf("Conceiro: C");
}
	else if((media >= 4) && (media < 6)){
		printf("Conceiro: D");
}
	else{
		printf("Conceiro: E");
}
}
