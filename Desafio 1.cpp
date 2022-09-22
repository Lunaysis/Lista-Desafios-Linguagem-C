#include <stdio.h>
main(){
	float Km_Rodados, Quantidade_Litros_Gasolina, Quantidade_Litros_Etanol, Gasto_Gasolina, Gasto_Etanol; 
	printf ("Informe a quantidade de Km que deseja rodar ");
	scanf ("%f",&Km_Rodados);
	Quantidade_Litros_Gasolina=Km_Rodados/10;
	Quantidade_Litros_Etanol=Km_Rodados/8;
	Gasto_Gasolina=Quantidade_Litros_Gasolina*5.25;
	Gasto_Etanol=Quantidade_Litros_Etanol*2.90;
	if (Gasto_Etanol>Gasto_Gasolina){
		printf ("Saira mais barato usar Gasolina\nGasto total de gasolina = %.3f\nGasto total de Etanol = %.3f",Gasto_Gasolina,Gasto_Etanol);
	}
	else { printf ("Saira mais barato usar Etanol\nGasto total de gasolina = %.3f\nGasto total de Etanol = %.3f",Gasto_Gasolina,Gasto_Etanol);
	}
}
