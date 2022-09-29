#include <stdio.h>

int main() {
	int Comeco_Intervalo,Final_Intervalo,C,R;
	printf ("Informe o começo e o final do intervalo\n");
	scanf ("%d%d",&Comeco_Intervalo,&Final_Intervalo);

	for(C==Comeco_Intervalo; C<= Final_Intervalo; C++) {
		R=C%2;
		if (R!=0){
			printf("%d \n",C);
		}
	}
}
