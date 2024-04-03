#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	//declaração de váriaveis
	int m,f1,f2,f3;
	
	//entrada
	printf("qual a idade de Dona Monica? \n");
	scanf("%d", &m);
	
	printf("qual a idade do filho 1? \n");
	scanf("%d",&f1 );
	
	printf("qual a idade do filho 2? \n");
	scanf("%d",&f2 );
	
	
	//processamento
	f3 = m - f1 - f2;
		
	//saída 
	if (f1 > f2){
		if (f1 > f3){
			printf("O mais velho é o filho 1 com %d anos \n ",f1);
		} else {
		printf("O mais velho é o terceiro filho com %d anos \n", f3);		
		}
		
	} else {
		if (f2>f3) {
			printf("O filho mais velho é o filho 2 com %d anos \n ", f2);
		} else {
		printf("O mais velho é o terceiro filho com %d anos \n", f3);
		}
}
	
	
	system("pause");
return 0;	
}
