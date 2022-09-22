#include <stdio.h>
#include <math.h>

main()
{
	float Altura,Peso,ICM;
	printf("Informe seu Peso ");
	scanf("%f",& Peso);
	printf("Informe sua altura ");
	scanf ("%f",&Altura);
	if (Altura==0)
	{
		printf("Altura invalida");
	}
	else 
	{
		ICM=Peso/pow(Altura,2);
		printf("Seu ICM é %f",ICM);
	}
	if (ICM<=20)
	{
		printf("\nAbaixo do peso");
	}
	else if (ICM>20&&ICM<=25)
	{
		printf("\nPeso normal");
	}
	else if (ICM>25&&ICM<=30)
	{
		printf("\nSobre Peso");
	}
	else if (ICM<30&&ICM<40)
	{
		printf("\nObeso");
	}
	else if (40<=ICM)
	{
		printf("Obeso Morbido");
	}

}
