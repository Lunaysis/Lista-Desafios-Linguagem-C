#include <stdio.h> 
main (){
	float notas [3], media =0.0;
	int i;
	for (i=0;i<3;i++){
		printf("Digite a nota do aluno=%d",i);
		scanf("%f",&notas[i]);
		media=media+notas[i];
	}
	media=media/3;
	for(i=0;i<3;i++){
		if(notas[i]>media){
			printf("Aluno %d média igual %f",i,notas[i]);
		}
	}
}
