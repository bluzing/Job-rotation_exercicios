#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	system("cls");
	
	int numero, n1=0, n2=1, soma, i;
	bool existe = false;
	
	printf("Informe um número: \n");
	scanf("%i", &numero);
	
	while (i <= numero){
		soma = n1 + n2;
		n1 = n2;
		n2 = soma;
		printf("%i ", soma);
		i = i+1;
		if(numero == soma){
			existe = true;
		}
		
	}
	if(existe == true){
		printf("\nO número está presente na sequência.");
	}else{
		printf("\nNúmero não está presente na sequência.");
	}
	
}
