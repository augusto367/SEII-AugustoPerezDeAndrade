#include <stdio.h>
#include <stdlib.h>

void resolverhanoi(int n,char origem,char destino,char auxiliar){

	if(n==1){
		printf("\nColocar disco 1 em %c na base %c",origem ,destino);
		return;
	}
	resolverhanoi(n-1,origem,auxiliar,destino);
	printf("\nColocar disco %d em %c na base %c",n,origem,destino);
	resolverhanoi(n-1,auxiliar,destino,origem);
}

main(){
	int N;
	printf("Numero de discos: ");
	scanf("%d",&N);
	printf("\nProcedimentos:\n");
	resolverhanoi(N,'A','C','B');
	printf("\n");
	return 0;
}
