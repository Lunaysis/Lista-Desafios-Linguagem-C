#include <stdio.h>
main (){
	float Raio,Area, Diametro;
	printf("Informe o raio da circunferencia ");
	scanf("%f",&Raio);
	Diametro=Raio*2;
	Area=Diametro*3.14;
	printf("O diametro e a area são respectivamente, %f, %f",Diametro,Area);
}
