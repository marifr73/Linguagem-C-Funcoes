#include<stdio.h>
#include<locale.h>
#define PI 3.14
#include<math.h>

float area (float a);

int main(){
	setlocale(LC_ALL, "Portuguese");
float n;
	printf("Informe o raio da circunferência: ");
	scanf("%f", &n);
	printf("A área de circunferencia é: %.2f", area(n));
return(0);
}

float area (float a){
	float area;
	area = PI * pow(a,2);
	return(area);
}
