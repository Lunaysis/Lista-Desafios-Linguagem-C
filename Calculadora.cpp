#include <stdio.h>
main()
{
	char Operacoes;
	float Numero_1, Numero_2, Resultado;
	
	printf("Digite o primeiro n�mero: ");
	scanf ("%f",&Numero_1);
	printf("Digite o segundo n�mero: ");
	scanf ("%f",&Numero_2);
	printf("Digite a opera��o desejada: ");
	scanf("%f",&Operacoes);
	
		if (Operacoes=='+')
		{
			Resultado=Numero_1+Numero_2;
			printf ("O resultado � igual a %f",Resultado);
		}
		
		else if (Operacoes=='-')
		{
			Resultado=Numero_1-Numero_2;
			printf ("O resultado � igual a %f",Resultado);
		}
		else if (Operacoes=='*')
		{
			Resultado=Numero_1*Numero_2;
			printf ("O resultado � igual a %f",Resultado);
		}
		else if (Operacoes=='/')
		{
			if (Numero_2!=0)
			{
				Resultado=Numero_1/Numero_2;
				printf ("O resultado � igual a %f",Resultado);
			}
			else
			{
				printf("N�o � poss�vel realizar essa opera��o ");
			}
		}

}
