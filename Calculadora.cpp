#include <stdio.h>
main()
{
	char Operacoes;
	float Numero_1, Numero_2, Resultado;
	
	printf("Digite o primeiro número: ");
	scanf ("%f",&Numero_1);
	printf("Digite o segundo número: ");
	scanf ("%f",&Numero_2);
	printf("Digite a operação desejada: ");
	scanf("%f",&Operacoes);
	
		if (Operacoes=='+')
		{
			Resultado=Numero_1+Numero_2;
			printf ("O resultado é igual a %f",Resultado);
		}
		
		else if (Operacoes=='-')
		{
			Resultado=Numero_1-Numero_2;
			printf ("O resultado é igual a %f",Resultado);
		}
		else if (Operacoes=='*')
		{
			Resultado=Numero_1*Numero_2;
			printf ("O resultado é igual a %f",Resultado);
		}
		else if (Operacoes=='/')
		{
			if (Numero_2!=0)
			{
				Resultado=Numero_1/Numero_2;
				printf ("O resultado é igual a %f",Resultado);
			}
			else
			{
				printf("Não é possível realizar essa operação ");
			}
		}

}
