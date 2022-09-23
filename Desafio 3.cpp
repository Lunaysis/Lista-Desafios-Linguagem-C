#include <stdio.h>
#include <math.h>
main(){
	float A,B,C,Delta,X1,X2,Potencia_B,Raiz_Delta;
	printf("Informe o valor do A (Número que multiplica o X^2)\n");
	scanf("%f",&A);
	printf ("Informe o valor de B (Número que multiplica o X)\n");
	scanf("%f",&B);
	printf("Informe o valor de C (Número que não realiza operação com X)\n");
	scanf("%f",&C);
	Potencia_B=pow(B,2);
	Delta=Potencia_B-4*A*C;
	Raiz_Delta=sqrt(Delta),
	X1=(-B+Raiz_Delta)/2*A;
	X2=(-B-Raiz_Delta)/2*A;
	printf ("X1 e X2, são respectivamente %f,%f",X1,X2);
	
}
